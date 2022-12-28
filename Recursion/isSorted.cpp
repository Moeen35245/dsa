// isSorted
#include <iostream>
using namespace std;

bool recursive(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {

        return false;
    }
    else
    {
        return recursive(arr + 1, n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    bool isSorted = recursive(arr, n);
    cout << isSorted;
    return 0;
}
