#include <iostream>
using namespace std;

void recursive(int a[], int n)
{
    if (n == 0)
    {
        return;
    }
    cout << a[n];
    recursive(a, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    recursive(a, n);

    return 0;
}