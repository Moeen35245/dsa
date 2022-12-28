// Two stack
#include <iostream>
using namespace std;

class TwoStack
{
public:
    int *arr;
    int cap;
    int top1 = 0;
    int top2 = 0;

    TwoStack(int n)
    {
        arr = new int[n];
        top1 = -1;
        top2 = n;
        cap = n;
    }

    void push1(int val)
    {

        if (top1 < top2 - 1)
        {

            top1++;
            arr[top1] = val;
        }
    }
    void push2(int val)
    {
        if (top1 < top2 - 1)
        {

            top2--;
            arr[top2] = val;
        }
    }

    void pop1()
    {
        if (top1 >= 0)
        {
            top1--;
        }
    }

    void pop2()
    {
        if (top2 < cap)
        {
            top2++;
        }
    }
};

int main()
{
    TwoStack st(6);
    st.push1(1);
    st.push1(2);
    st.push1(3);
    st.push1(4);
    st.push2(5);
    st.push2(6);

    return 0;
}
