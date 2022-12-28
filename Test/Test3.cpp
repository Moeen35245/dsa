// TCS coding round-2 question
#include <iostream>
using namespace std;

int main()
{
    string s;
    int key;
    getline(cin, s);
    cin >> key;

    if (key < 0)
    {
        cout << "Invalid Input";
        return 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || s[i] == '-')
            continue;
        int n = int(s[i]) + key;
        s[i] = n;
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    return 0;
}