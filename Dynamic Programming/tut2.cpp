// ** tabulation in dp.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prev1 = 1;
    int prev2 = 0;
    for (int i = 2; i <= n; i++)
    {
        int curr = prev2 + prev1;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1;
    return 0;
}