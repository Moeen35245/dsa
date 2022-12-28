
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool flag = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (flag)
        {
            if (arr[i] > arr[i + 1])
            {
                arr[i] = arr[i] + arr[i + 1];
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1];
            }

            flag = false;
        }

        else
        {
            if (arr[i] < arr[i + 1])
            {
                arr[i] = arr[i] + arr[i + 1];
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1];
            }
            flag = true;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}