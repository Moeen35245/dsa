// QUE:-1 Write a recursive function
//  that takes a number and returns
// the sum of all the numbers
//  from zero to that number

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return n;
    return n + sum(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << sum(n);

    return 0;
}