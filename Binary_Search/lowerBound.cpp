#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 1, 3, 5, 5, 6, 7};
    int x, n = 7;
    cin >> x;
    cout << lowerBound(arr, n, x);
    return 0;
}