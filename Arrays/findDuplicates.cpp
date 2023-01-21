#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    unordered_map<int, int> umpp;
    int repeated = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (umpp[nums[i]] >= 1)
        {
            repeated = nums[i];
            cout << "p";
        }

        umpp[nums[i]]++;
        cout << umpp[nums[i]] << " ";
    }
    return -1;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << findDuplicate(v);

    return 0;
}
