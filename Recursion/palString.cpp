/*Write a function that takes a
string and returns if the
 string is a palindrome.*/

#include <iostream>
using namespace std;
bool rev(string S, int n)
{
    int length = S.length();
    if (n == 0)
    {
        return true;
    }

    if (S[0] != S[length - 1])
        return false;
    string res = S.erase(0, 1);

    return rev(res, n - 1);
}

int main()
{
    string S;
    cin >> S;
    int n = S.length() / 2 - 1;
    cout << rev(S, n);
}