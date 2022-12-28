// append 1 to ll

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
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }

    cout << "NULL" << endl;
}

node *reverse(node *&head)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    return prevPtr;
}
// Thigs are getting intresting
node *recursive(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

node *addOne(node *head)
{
    int carry = 0;
    node *newHead = recursive(head);
    node *temp = newHead;
    while (temp)
    {
        if (temp->data >= 9)
        {
            temp->data = 0 + carry;
            temp = temp->next;
            carry = 1;
        }
        else if (temp->data >= 9 && temp->next == NULL)
        {
            temp->data = 0 + carry;
        }
        else if (temp->next == NULL)
        {
            temp->data += (1 + carry);
            break;
        }
        else
        {
            temp->data += carry;
            temp = temp->next;
        }
    }
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

    display(head);

    return 0;
}