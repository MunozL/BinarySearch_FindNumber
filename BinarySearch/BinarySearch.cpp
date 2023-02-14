// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//Binary search has to always be sorted in order!
//O(logn) faster than linear search
int main()
{
    int A[10] = {6,8,13,17,20,22,25,28,30,35};
    int low = 0, high = 9, numberToFind, middle;

    cout << "Enter # that you want to find: " << endl;
    cin >> numberToFind;

    while (low <= high) //Look for number as long as low # is less or equal to high
    {
        middle = (low + high) / 2;//find middle of array. Divide lowest subscrit with higher

        if (numberToFind == A[middle]) //if staments to decide it numbered entered is the same in the A[middle] Array element
        {
            cout << "Found at " << middle;
            return 0;
        }
        else if (numberToFind < A[middle]) high = middle - 1; // 

        else low = middle + 1;
    }

         cout << "not found";

       return 0;


}

