// ** simple sorting technique using for loop
// ** this sorting technique ==> bubble sort
// ** each swap removes one inversion,i.e.,if the whole array is in the descending array then complexity(worst case) ==> O(n^2)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the length of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "now we will sort the array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]); // ** used swap function.
            }
        }
    }
    cout << "the sorted array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// ** merge sort algorithm
// ** this algorithm is based on the divide and conquer approach.
// ** the time complexity of this algorithm is ==> O(nlogn)
#include <iostream>
using namespace std;

// ** merge function
void merge(int arr2[], int l, int mid, int r)
{
    // **  we have to create three pointers here.
    int i = l;       // ** starting index  ==> left sub-array.
    int j = mid + 1; // ** starting index ==> right sub-array.
    int k = l;       // ** starting index ==> temporary array.
    int temp[6];     // ** temporary array.

    // ** now we will apply a while loop.
    while (i <= mid && j <= r)
    {
        if (arr2[i] < arr2[j])
        {
            temp[k] = arr2[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    { // ** this while loop is for the left out elements in the left sub-array.
        temp[k] = arr2[i];
        i++;
        k++;
    }
    while (j <= r)
    { // ** this while loop ==> left out elements in the right sub-array.
        temp[k] = arr2[j];
        j++;
        k++;
    }
    for (int h = l; h <= r; h++)
    { // ** for loop ==> to transfer the sorted elements of the temporary array to the actual array.
        // *! note : the h should not be given 0 as it indicates the leftmost part of both the array. Also the h should not be given directly
        // *! the integet size of the array as it is the right most part of both the sub arrays.
        arr2[h] = temp[h];
    }
}

// ** mergesort function
void mergesort(int arr2[], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l + r) / 2;
        mergesort(arr2, l, mid);
        mergesort(arr2, mid + 1, r);
        merge(arr2, l, mid, r); // ** calls merge function
    }
}

int main()
{
    int arr1[6];
    cout << "enter the array" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr1[i];
    }
    cout << "before the merge sort has been implemented" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    // ** calls mergesort function
    mergesort(arr1, 0, 5);
    cout << "after the merge sort algorithm has been implemented" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}