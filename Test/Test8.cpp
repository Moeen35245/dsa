#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {6, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int arr[] = {1, 4, 20, 3, 10, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<long long, int> mpp;
    long long count = 0, sum = 0;
    mpp[sum]++;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        if (mpp[sum])
        {
            count += mpp[sum];
        }
        mpp[sum]++;
    }

    cout << count;
}