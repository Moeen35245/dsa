/*Write a recursive function that takes a
list of numbers as an input and returns the p
roduct of all the numbers in the list.*/

#include <iostream>
using namespace std;

int arrayMult(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    return arr[0] * arrayMult(arr + 1, n - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << arrayMult(arr, 6);
    return 0;
}