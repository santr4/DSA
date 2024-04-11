// ** N meetings in one room.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct meeting
    {
        int start;
        int end;
        int pos;
    };

    bool static comparator(struct meeting m1, meeting m2)
    {
        if (m1.end < m2.end)
        {
            return true;
        }
        else if (m1.end > m2.end)
        {
            return false;
        }
        else if (m1.pos < m2.pos)
        {
            return true;
        }
        return false;
    }

    void max_meetings(vector<vector<int>> &v, int n)
    {
        struct meeting meet[n];
        for (int i = 0; i < n; i++)
        {
            meet[i].start = v[i][0], meet[i].end = v[i][1], meet[i].pos = i + 1;
        }
        sort(meet, meet + n, comparator);

        int count = 0;

        int limit = meet[0].end;
        count++;

        for (int i = 1; i < n; i++)
        {
            if (meet[i].start > limit)
            {
                limit = meet[i].end;
                count++;
            }
        }

        cout << "Maximum number of meetings: " << count << endl;
    }
};

int main()
{
    Solution obj;
    int n = 6;
    vector<vector<int>> v = {{1, 2}, {3, 4}, {0, 5}, {5, 7}, {8, 9}, {5, 9}};
    obj.max_meetings(v, n);
    return 0;
}