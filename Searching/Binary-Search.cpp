#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            return mid; // key found
        }
        if (arr[mid] > key)
        {
            right = mid - 1; // Search in the left half
        }
        else
        {
            left = mid + 1; // Search in the right half
        }
    }
    return -1; // key not found
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11};
    int key = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = binarySearch(arr, size, key);

    if (i != -1)
    {
        cout << "Element found at index " << i << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}