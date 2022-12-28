// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{

    // Function to find the trapped water between the blocks.
public:
    long long trappingWater(int arr[], int n)
    {
        // code here
        vector<int> lm;
        vector<int> rm;
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            lm.push_back(max(arr[i], mx));
            mx = max(arr[i], mx);
        }
        mx = -1;
        for (int i = n - 1; i >= n; i--)
        {
            rm.push_back(max(arr[i], mx));
            mx = max(arr[i], mx);
        }
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            count += (min(lm[i], rm[i]) - arr[i]);
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    //testcases
    cin >> t;

    while (t--)
    {
        int n;

        //size of array
        cin >> n;

        int a[n];

        //adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }

    return 0;
} //