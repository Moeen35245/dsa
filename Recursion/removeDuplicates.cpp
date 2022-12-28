/*Given a string Str which may contains lowercase and uppercase chracters. The task is to remove all duplicate characters from the string and find the resultant string. The order of remaining characters in the output should be same as in the original string.*/
/*
#include <iostream>
using namespace std;

char map[26] = {'\0'};

*/

// string removeDupl(string s, char map[])
// {
//     if (s.length() == 1)
//     {
//         return s;
//     }
//     char fw = s[0];
//     string res = "";
//     if (map[fw - 97] == '\0')
//     {
//         map[fw - 97] = fw;
//         res = s.erase(0, 1);
//         string resStr = removeDupl(s, map);
//         return fw + resStr;
//     }

//     else
//     {
//         res = s.erase(0, 1);
//         string resStr = removeDupl(s, map);
//         return resStr;
//     }
// }

// int main()
// {
//     string S;
//     cin >> S;
//     char characters[26];
//     for (int i = 0; i < 26; i++)
//     {
//         characters[i] = '\0';
//     }
//     // char fw = characters[4];
//     // cout << characters[fw - 97];
//     cout << removeDupl(S, characters);
//     return 0;
// }

/*

string removeDupl(string s)
{
    if (s.length() == 1)
    {
        return s;
    }
    char fw = s[0];
    string res = "";
    if (map[fw - 97] == '\0')
    {
        map[fw - 97] = fw;
        res = s.erase(0, 1);
        string resStr = removeDupl(s);
        return fw + resStr;
    }

    else
    {
        res = s.erase(0, 1);
        string resStr = removeDupl(s);
        return resStr;
    }
}

int main()
{
    string S;
    cin >> S;

    // for (int i = 0; i < 26; i++)
    // {
    //     map[i] = '\0';
    // }
    // char fw = characters[4];
    // cout << characters[fw - 97];
    cout << removeDupl(S);
    return 0;
}
*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
// char map[26] = {'\0'};

class Solution
{
    char map[26] = {'\0'};
    char MAP[26] = {'\0'};

public:
    string removeDuplicates(string s)
    {
        // code here
        if (s.length() == 0)
        {
            return s;
        }
        char fw = s[0];
        string res = "";
        if (islower(fw) && map[fw - 97] == '\0')
        {
            map[fw - 97] = fw;
            res = s.erase(0, 1);
            string resStr = removeDuplicates(s);
            return fw + resStr;
        }
        else if (isupper(fw) && MAP[fw - 65] == '\0')
        {
            MAP[fw - 65] = fw;
            res = s.erase(0, 1);
            string resStr = removeDuplicates(s);
            return fw + resStr;
        }

        else
        {
            res = s.erase(0, 1);
            string resStr = removeDuplicates(s);
            return resStr;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
} //