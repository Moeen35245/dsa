// Basic of linked list
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
// Main function
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    insertAtHead(head, 8);
    display(head);
    cout << searchLinearly(head, 5);
    cout << endl;
    deletion(head, 5);
    display(head);

    return 0;
}