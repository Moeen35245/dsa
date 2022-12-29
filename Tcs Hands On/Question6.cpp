#include <iostream>
using namespace std;
int main()
{

    int N;
    cin >> N;
    int arr[N];
    arr[0] = 0;
    for (int i = 1; i < N; i++)
    {
        if (i % 2 == 1)
            arr[i] = (arr[i - 1] / 2);
        else
            arr[i] = arr[i - 2] + 2;
    }
    cout << arr[N - 1];
    return 0;
}