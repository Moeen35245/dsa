#include <iostream>
using namespace std;
#define n 100

class stack
{
private:
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overFlow";
            return;
        }

        top++;
        arr[top] = x;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack";
            return -1;
        }
        return arr[top];
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No element in Stack";
            return;
        }

        top--;
    }
    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(14);
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << endl
         << st.empty();
    return 0;
}