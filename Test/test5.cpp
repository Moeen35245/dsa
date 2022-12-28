// count pairs in a given array that is divisble by k;
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 2, 1, 7, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4, count = 0;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        if (mpp[(k - (arr[i] % k)) % k])
        {
            count += mpp[(k - (arr[i] % k)) % k];
        }
        mpp[arr[i] % k]++;
    }
    cout << count;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {9, 7, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        if (mpp[(k - (arr[i] % k)) % k])
        {
            mpp[((k - (arr[i] % k)) % k)]--;
        }
        else
        {
            mpp[arr[i] % k]++;
        }
    }

    for (auto i : mpp)
    {
        if (i.second)
        {
            cout << "Flase";
            return 0;
        }
    }
    cout << "true";
}