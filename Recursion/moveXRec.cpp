// movex
#include <iostream>
using namespace std;

string moveX(string s)
{
    if (s.length() == 1)
        return s;

    char fw = s[0];
    string res = s.erase(0, 1);

    if (fw == 'x')
    {
        string nextString = moveX(res);
        return nextString + fw;
    }
    else
    {
        string nextString = moveX(res);
        return fw + nextString;
    }
}

int main()
{
    string S;
    cin >> S;

    cout << moveX(S);
    return 0;
}