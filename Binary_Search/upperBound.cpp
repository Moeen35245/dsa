#include <iostream>
using namespace std;

int higherBound(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans + 1;
}

int main()
{
    int arr[] = {1, 1, 3, 5, 5, 6, 7};
    int x, n = 7;
    cin >> x;
    cout << higherBound(arr, n, x);
    return 0;
}