#include <iostream>
using namespace std;

// create a Linked List Implementation.
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

int main()
{
    node *nodeName = new node(10);
    cout << nodeName->data << endl;
    cout << nodeName->next << endl;
    return 0;
}
