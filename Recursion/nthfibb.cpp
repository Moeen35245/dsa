/*
Write a recursive function that takes a
number ‘n’ and returns the nth number
of the Fibonacci number.*/

#include <iostream>
using namespace std;

int fibb(int n)
{
    if (n == 1 || n == 2)
        return 1;

    return fibb(n - 1) + fibb(n - 2);
}

int main()
{

    int n;
    cin >> n;

    cout << fibb(n);
    return 0;
}