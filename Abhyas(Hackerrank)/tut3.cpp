// ** w_Reverse digits of an integer

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        while (n != 0)
        {
            int digit = n % 10;
            ans = (ans * 10) + digit;
            n = n / 10;
        }
        cout << ans << endl;
    }
    return 0;
}
