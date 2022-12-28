// intersection point
#include <iostream>

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node *head1, struct Node *head2);

Node *inputList(int size)
{
    if (size == 0)
        return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node *head1 = inputList(n1);
        Node *head2 = inputList(n2);
        Node *common = inputList(n3);

        Node *temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL)
            temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL)
            temp->next = common;

        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
int calcLen(Node *head)
{
    int count = 0;
    while (head)
    {
        head = head->next;
        count++;
    }

    return count;
}

// Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here
    Node *str1 = head1;
    Node *str2 = head2;
    int len1 = calcLen(head1);
    int len2 = calcLen(head2);
    int n;
    // int n=len1>len2?(len1-len2):(len2-len1);
    if (len1 > len2)
    {
        n = len1 - len2;
    }
    else
    {
        n = len2 - len1;
    }

    if (len1 > len2)
    {
        for (int i = 0; i < n; i++)
        {
            str1 = str1->next;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            str2 = str2->next;
        }
    }

    while (str1->next != str2->next)
    {
        str1 = str1->next;
        str2 = str2->next;
    }
    return str1->data;
}
