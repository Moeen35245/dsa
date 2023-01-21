#include <bits/stdc++.h>
using namespace std;
vector<int> AddTwoArrays(vector<int> a, vector<int> b, int m, int n)
{
    int sum = 0, carry = 0, i = n - 1, j = n - 1;
    vector<int> ans;
    /*
    a=1,2,3,4
    b=1,2,3,4
    */
    while (i >= 0 and j >= 0)
    {
        sum = a[i] + b[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    /*
    a=1,2,3,4
    b=4
    */

    while (i >= 0)
    {
        sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    /*
    b=1,2,3,4
    a=4
    */

    while (j >= 0)
    {
        sum = a[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    /*
    a=9,9,9
    b=9,9,9
    */

    while (carry != 0)
    {
        sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // reverse the ans vector before returning
    for (int i = 0; i < ans.size(); i++)
    {
        swap(ans[i], ans[ans.size() - 1]);
    }

    return ans;
}

int main()
{
}
