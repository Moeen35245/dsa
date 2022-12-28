// cycle ll
// thing are getting a little bit intresting

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }

    cout << "NULL" << endl;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void makeCycle(node *&head, int k)
{
    int count = 1;
    node *temp = head;
    node *cycleStartNode;

    while (temp->next != NULL)
    {
        if (count == k)
        {
            cycleStartNode = temp;
        }

        temp = temp->next;
        count++;
    }

    temp->next = cycleStartNode;
}

bool detectCycle(node *&head)
{
    node *fast = head;
    node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}

void removeCycle(node *&head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        fast = fast->next->next;
        slow = slow->next;
        /* code */

    } while (fast != slow);
    fast = head;

    while (slow->next != fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = NULL;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    makeCycle(head, 2);
    cout << detectCycle(head);
    removeCycle(head);
    cout << endl;
    cout << detectCycle(head);

    return 0;
}