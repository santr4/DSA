// ** longest substring without repeating characters

#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    if (s.size() == 0)
    {
        return 0;
    }
    int maxans = INT_MIN;
    for (int i = 0; i < s.length(); i++)
    {
        unordered_set<int> set;
        for (int j = i; j < s.length(); j++)
        {
            if (set.find(s[j]) != set.end())
            {
                maxans = max(maxans, j - i);
                break;
            }
            set.insert(s[j]);
        }
    }
    return maxans;
}

int main()
{
    string s = "abcabca";
    cout << "print the length of the longest substring without repeating characters" << endl;
    int z = solve(s);
    cout << z << endl;
    return 0;
}