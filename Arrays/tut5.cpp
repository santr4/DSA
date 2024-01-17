// Program to find the  peak element in the array. The peak element is an element which is greater than or equal to its neighbors.

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr, int low, int high, int n)
{
    int mid = low + (high - low) / 2;

    // check if the middle element is a peak element or not.
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
    {
        return mid;
    }

    if (mid < n - 1 && arr[mid] < arr[mid + 1])
    {
        return findPeakElement(arr, mid + 1, high, n);
    }
    else
    {
        return findPeakElement(arr, low, mid - 1, n);
    }
}

int main()
{
    vector<int> arr = {1, 3, 20, 4, 1, 0};
    int n = arr.size();
    int peakIndex = findPeakElement(arr, 0, n - 1, n);
    cout << "peak element is at index" << peakIndex << "with value" << arr[peakIndex] << endl;
    return 0;
}