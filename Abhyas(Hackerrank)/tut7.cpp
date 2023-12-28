// ** w_Jack likes Jackfruits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int k, n, j;
    cin >> k >> n >> j;
    int total_sum = 0;
    for (int i = 1; i <= j; i++)
    {
        total_sum += (i * k);
    }
    int x = total_sum - n;
    if (x < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << x << endl;
    }
    return 0;
}
