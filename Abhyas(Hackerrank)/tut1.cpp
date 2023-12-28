// ** n_Positive or negative or zero

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << "Positive" << endl;
    }
    else if (n < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }
    return 0;
}
