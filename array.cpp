// ** to initialize and store values inside an array.
#include <iostream>
using namespace std;

int main()
{
    int n(0);
    cout << "enter the value of the n" << endl;
    cin >> n;
    int arr[n]; // ** initializing the array.
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the elements of the array input by the user" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
// ** another method to traverse through the array
#include <bits/stdc++.h>
#include <array>
using namespace std;

int main()
{
    int arr[6] = {1, 23, 4, 5, 6, -23};
    int l = sizeof(arr) / sizeof(arr[0]);
    cout << "method 1" << endl;
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "method 2" << endl;
    for (int i = 0; i < l; i++)
    {
        cout << i[arr] << " ";
    }
    cout << endl;
    cout << "method 3" << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
}
