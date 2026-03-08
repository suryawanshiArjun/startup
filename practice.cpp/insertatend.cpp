#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int val)
    {
        data=val;
        next=nullptr;
    }
};

void insertatend(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if(head == nullptr)
    {
        head=newNode;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

void display(Node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"NULL\n";
}

int main()
{
    Node* head = nullptr;
    insertatend(head,10);
    insertatend(head,20);
    display(head);
    return 0;
}