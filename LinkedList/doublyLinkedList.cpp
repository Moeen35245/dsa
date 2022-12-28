// doubly ll

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;
    return;
}
void deletion(node *&head, int pos)
{
    int count = 1;
    node *temp = head;
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    while (temp != NULL && count < pos)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
        head->prev = n;
    head = n;
    return;
}
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    return;
}

void display(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    return;
}
node *reverse(node *head)
{
    node *prevPtr = head->prev;
    node *currPtr = head;
    node *nextPtr;

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;

        currPtr->next = prevPtr;
        currPtr->prev = nextPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    return prevPtr;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    node *newHead = reverse(head);
    display(newHead);
    return 0;
}