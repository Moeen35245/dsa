#include <iostream>
using namespace std;

int main()
{
    int R, C;
    cin >> R;
    cin >> C;
    int P[R][C];

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> P[i][j];
    int ans, sum = -1;
    for (int i = 0; i < R; i++)
    {
        int mx = 0;
        for (int j = 0; j < C; j++)
        {
            mx += P[i][j];
        }
        if (mx > sum)
        {
            ans = i + 1;
            sum = mx;
        }
    }

    cout << ans;
    return 0;
}