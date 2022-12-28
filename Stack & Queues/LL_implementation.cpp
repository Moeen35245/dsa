// stack ll implementation
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class MyStack
{
public:
    Node *head;
    int sz;

    MyStack()
    {
        head = NULL;
        sz = 0;
    }

    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        sz++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << INT16_MIN << endl;
            return;
        }
        Node *todelete = head;
        head = head->next;
        delete todelete;
        sz--;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    int peak()
    {
        if (head == NULL)
            return INT16_MIN;
        return head->data;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    MyStack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.peak() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.isEmpty() << endl;
    cout << st.size();
    return 0;
}