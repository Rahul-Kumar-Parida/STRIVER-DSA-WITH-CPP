#include <iostream>
using namespace std;

// create a Linked List Implementation...................................
struct node
{
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// 😍Insert At Begin..............................................................
void insertAtBegin(node *&head, int d)
{
    // New Node Create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

// 😍Insert At End............................................................
void insertAtEnd(node *&tail, int d)
{
    // New Node Create
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

// 😍 Insert At Any Position..................................................
void insertAtPosition(node *&tail, node *&head, int position, int d)
{
    // 🍀 insert at first position
    if (position == 1)
    {
        insertAtBegin(head, d);
        return;
    }

    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // 🍀 insert at last position
    if (temp->next == NULL)
    {
        insertAtEnd(tail, d);
        return;
    }

    // 🍀  creating a node for d
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// 😍Print Linked List..........................................................
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // create a new node
    node *nodeName = new node(10);
    // cout << nodeName->data << endl;
    // cout << nodeName->next << endl;

    // head pointer to nodeName
    node *head = nodeName;
    node *tail = nodeName;
    print(head);
    insertAtEnd(tail, 15);
    print(head);
    insertAtEnd(tail, 20);
    print(head);
    insertAtEnd(tail, 30);
    print(head);
    insertAtPosition(tail, head, 5, 22);
    print(head);
    return 0;
}
