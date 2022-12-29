// first recurring character
// if not found then return "-"

#include <iostream>
using namespace std;

string firstRecurring(string st)
{
    int mpp[26] = {0};
    for (int i = 0; i < st.length(); i++)
    {
        char temp = st[i];

        if (mpp[st[i] - 97])
        {
            string s(1, temp);
            return s;
        }

        mpp[st[i] - 97]++;
    }
    return "-";
}

int main()
{
    string st;
    getline(cin, st);
    cout << firstRecurring(st);
    return 0;
}