// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, n;
        cin >> l >> n;
        int arr[l];
        for (int i = 0; i < l; i++)
            cin >> arr[i];
        if (findPair(arr, l, n))
            cout << "1" << endl;
        else
            cout << "-1" << endl;
        // bool isTrue = findPair(arr, l, n);
        // for (int i = 0; i < l; i++)
        //     cout << arr[i] << " ";
    }

    return 0;
} // } Driver Code Ends

bool findPair(int arr[], int size, int N)
{
    //code
    sort(arr, arr + size);

    for (int i = 0; i < size - 1; i++)
    {
        int ans = arr[i] + N;
        int lw = i + 1, hi = size - 1;

        while (lw <= hi)
        {
            int mid = lw + (hi - lw) / 2;
            if (arr[mid] == ans)
                return 1;
            else if (arr[mid] < ans)
                lw = mid + 1;
            else
                hi = mid - 1;
        }
    }

    return 0;
}