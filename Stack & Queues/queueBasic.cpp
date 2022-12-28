// First in first out (FIFO)
#include <iostream>
using namespace std;
#define n 5
class Queue
{
private:
    int *arr;
    int front, rear;
    int count;

public:
    Queue()
    {
        arr = new int[n];
        front = 0;
        rear = 0;
        count = 0;
    }

    void push(int x)
    {
        if (rear >= n)
        {
            cout << "queue overflow";
            return;
        }
        arr[rear] = x;
        rear++;
    }

    int top()
    {
        if (front == rear)
        {
            // cout << "No element in Queue";
            return -1;
        }
        return arr[front];
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "No element in Queue";
            return;
        }
        front++;
    }

    bool empty()
    {
        return front == rear;
    }
};

int main()
{
    Queue que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);
    cout << que.top() << endl;
    que.pop();
    que.pop();
    que.pop();
    cout << que.top() << endl;
    que.pop();
    que.pop();
    cout << que.empty() << endl;
    cout << que.top() << endl;

    return 0;
}