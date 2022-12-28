// Reverse a stack using recursin without using extra stack

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int topElement = st.top();
    st.pop();
    insertAtBottom(st, x);
    st.push(topElement);
}

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int x = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, x);
}

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    reverse(st);
    for (int i = 0; i < n; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
