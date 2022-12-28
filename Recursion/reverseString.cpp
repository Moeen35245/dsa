// You are given a string s.
// You need to
// reverse the string.

/*
Input:
s = Geeks
Output: skeeG
*/

#include <iostream>
using namespace std;

string reverse(string S)
{
    int len = S.length();

    if (len == 1)
    {
        return S;
    }
    char firstWord = S[0];
    string res = S.erase(0, 1);
    string revString = reverse(res);
    return revString + firstWord;
}

int main()
{
    string S;
    cin >> S;
    int n = S.length();

    cout << reverse(S);
    return 0;
}