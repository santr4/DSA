// ** next permutation

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3};
//     next_permutation(arr, arr + 3);
//     cout << arr[0] << " " << arr[1] << " " << arr[2];
//     return 0;
// }

// ** another approach

#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &arr)
{
    int n = arr.size();
    int ind = -1;
    for (int i = n - 2; i >= 0; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(arr.begin(), arr.end());
        return arr;
    }
    for (int i = n - 1; i > ind; i++)
    {
        if (arr[i] > arr[ind])
        {
            swap(arr[i], arr[ind]);
            break;
        }
    }

    reverse(arr.begin() + ind + 1, arr.end());
    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> ans = nextPermutation(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}