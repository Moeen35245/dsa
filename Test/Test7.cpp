// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int mpp[26] = {0};
        int ans = -1;
        for (int i = 0; i < patt.length(); i++)
        {
            mpp[patt[i] - 97]++;
        }

        for (int i = 0; i < str.length(); i++)
        {
            if (mpp[str[i] - 97])
            {
                ans = i;
                break;
            }
        }
        return ans;
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
        string patt;
        cin >> str;
        cin >> patt;
        Solution obj;
        cout << obj.minIndexChar(str, patt) << endl;
    }
    return 0;
}
