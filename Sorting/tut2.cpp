// ** mergesort

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;
    int LeftArray[n1], RightArray[n2];
    for (int i = 0; i < n1; i++)
    {
        LeftArray[i] = arr[beg + i];
    }
    for (int i = 0; i < n2; i++)
    {
        RightArray[i] = arr[mid + i + 1];
    }
    i = 0;
    j = 0;
    k = beg;
    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            arr[k] = LeftArray[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = RightArray[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergesort(arr, beg, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {11, 30, 24, 7, 31, 16, 39, 41};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "before sorting array elements are: \n"
         << endl;
    printarray(arr, n);
    mergesort(arr, 0, n - 1);
    cout << "after sorting array elements \n"
         << endl;
    printarray(arr, n);
    return 0;
}