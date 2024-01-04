// ** fibonnaci series using dp.
// ** memoization

#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }

    else if (dp[n] != -1)
    {
        return dp[n];
    }

    else
    {
        dp[n] = f(n - 1, dp) + f(n - 2, dp);
        return dp[n];
    }
}

int main()
{
    cout << "enter the position of the fibonnaci sequence" << endl;
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << f(n, dp);
    return 0;
}