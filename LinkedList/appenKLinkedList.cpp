// appednd k ll
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

int lenCalc(node *);

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

node *appendK(node *head, int k)
{
    int len = lenCalc(head);
    node *temp = head;
    node *tailNode;
    node *lastNode;

    for (int i = 1; i <= len; i++)
    {
        if (i == len - k)
        {
            lastNode = temp;
        }
        if (i == len)
        {
            tailNode = temp;
        }
        temp = temp->next;
    }
    tailNode->next = head;
    head = lastNode->next;
    lastNode->next = NULL;
    return head;
}
int lenCalc(node *head)
{
    int len = 0;

    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
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

    node *newHead = appendK(head, 3);

    display(newHead);

    return 0;
}