#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5, count = 0;
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto i : mpp)
    {
        if (i.second > n / k)
            count++;
    }

    cout << count;
}