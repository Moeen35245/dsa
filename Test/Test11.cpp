#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    unordered_map<char, int> mpp;
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (!mpp[s[i]])
        {
            mpp[s[i]]++;
            ans += s[i];
        }

        //  else
        //  {
        //      s.erase(i, 1);
        //  }
    }
    // code here
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << removeDuplicates(s);
    return 0;
}