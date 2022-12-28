// Given a string, we have to find out all
// subsequences of it. A String is a
// subsequence of a given String, that is
// generated by deleting some character of a
// given string without changing its order.

/*
Input : abc
Output : a, b, c, ab, bc, ac, abc

Input : aaa
Output : a, aa, aaa
*/

#include <bits/stdc++.h>
using namespace std;

set<string> sub(string s, int indx, string final, set<string> ds)
{
    if (indx == s.length())
    {
        ds.insert(final);

        return ds;
    }

    char currChar = s[indx];
    sub(s, indx + 1, final + currChar, ds);

    sub(s, indx + 1, final, ds);
}

int main()
{
    string S;
    cin >> S;
    int indx = 0;
    string final = "";
    set<string> str;
    str = sub(S, indx, final, str);
    for (auto it = str.begin(); it != str.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}