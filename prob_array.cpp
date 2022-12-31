// ** code : LECANDY

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        long c;
        cin >> n >> c;
        int x;
        long sum(0);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        if (sum <= c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}