/* Queue implementation with ll */
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int val)
    {
        node *n = new node(val);
        if (front == NULL)
        {
            back = n;
            front = n;
        }
        back->next = n;
        back = n;
    }

    int pick()
    {
        if (front == NULL)
        {
            cout << "No element in Queue" << endl;
            return -1;
        }

        return front->data;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "No element in Queue" << endl;
            return;
        }
        node *toDelete = front;
        front = front->next;
        delete toDelete;
    }

    bool empty()
    {
        return front == NULL;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.pick() << endl;
    q.pop();

    q.pop();
    q.pop();
    cout << q.pick() << endl;

    cout << q.empty() << endl;
    q.pop();
    cout << q.empty() << endl;

    return 0;
}