// ** n_Interval Sum

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = b; i >= a; i--)
    {
        sum += i;
        ;
    }
    cout << sum;
    return 0;
}
