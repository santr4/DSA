// ** check if a string is palindrome or not.

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        if (!isalnum(s[left]))
        {
            left++;
        }
        else if (!isalnum(s[right]))
        {
            right--;
        }
        else if (tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }
        else
        {
            left++;
            right--;
        }
    }
    return true;
}

int main()
{
    string s = "ABCDCBA";
    bool ans = isPalindrome(s);
    if (ans == true)
    {
        cout << "the string is a palindrome" << endl;
    }
    else
    {
        cout << "the string is not a palindrome" << endl;
    }
    return 0;
}