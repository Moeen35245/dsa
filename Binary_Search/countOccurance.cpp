#include <iostream>
using namespace std;

int lastOccur(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            low = mid + 1;
        }
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
    }
    return ans;
}

int firstOccur(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            high = mid - 1;
        }
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 1, 3, 3, 3, 3, 7};
    int x, n = 7;
    cin >> x;

    int l = lastOccur(arr, n, x), f = firstOccur(arr, n, x);
    if (f == -1 && l == -1)
        cout << -1;
    else
        cout << l - f + 1;
    return 0;
}