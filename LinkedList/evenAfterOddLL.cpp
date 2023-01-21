// even odd
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
// Display Linked-List
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }

    cout << "NULL" << endl;
}

// Seraching Linearly
bool searchLinearly(node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
            return true;

        head = head->next;
    }

    return false;
}
// Inserting At Head Node
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
    return;
}
// Inserting At Tail Node
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
void deleteAtHead(node *&head)
{
    node *toDelete = head;
    head = head->next;
    delete toDelete;
    return;
}

node *evenAfterOdd(node *head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;
    return head;
}

void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

node *segregateEvenAndOdd(node *head)
{
    node *even = NULL;
    node *evenStart = NULL;
    node *odd = NULL;
    node *oddStart = NULL;

    while (head)
    {
        if (head->data % 2 == 0)
        {
            if (evenStart == NULL)
            {
                evenStart = head;
                even = head;
            }
            else
            {
                even->next = head;
                even = even->next;
            }
        }

        else
        {
            if (oddStart == NULL)
            {
                oddStart = head;
                odd = head;
            }
            else
            {
                odd->next = head;
                odd = odd->next;
            }
        }
        head = head->next;
    }

    if (evenStart)
    {
        even->next = oddStart;
    }
    if (oddStart)
    {
        odd->next = NULL;
    }
    if (evenStart)
        return evenStart;
    return oddStart;
}
// Main function
int main()
{
    node *head = NULL;
    insertAtTail(head, 2);
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 4);
    insertAtTail(head, 7);

    display(head);
    node *newHead = segregateEvenAndOdd(head);

    display(newHead);

    return 0;
}