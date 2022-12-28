#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int x, n = 7;
    cin >> x;

    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            cout << mid;
        if (arr[mid] > x)
            high = mid - 1;
        if (arr[mid] < x)
            low = mid + 1;
    }
    cout << -1;
    return 0;
}

//OverFow condition
/*
if (low=INT_MAX && high=INT_MAX)
then (low+high) gives overFlow
so insead of writing 
mid=(low+high)/2
we can write 
mid=low+(high-low)/2

*/