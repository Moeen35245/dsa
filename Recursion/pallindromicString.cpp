// pallindromic string
#include <iostream>
#include <algorithm>
using namespace std;

string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

bool recursive(int i, string s)
{
    int n = s.length();
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] == s[n - i - 1])
    {
        return recursive(i + 1, s);
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    s = removeSpaces(s);
    int i = 0;
    cout << recursive(i, s);
    return 0;
}