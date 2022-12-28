/*Write a recursive function
 that takes a number as an
 input and returns the
factorial of that number.*/

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}