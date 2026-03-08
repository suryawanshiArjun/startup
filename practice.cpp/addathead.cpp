#include <iostream>
using namespace std;

// creating the node 
struct Node{
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=nullptr;
    }
};

// insertiung at beginning 
void insertatbeginning(Node*&head, int val)
{
    Node* newNode= new Node(val);
    newNode->next=head;
    head=newNode;
}
void display(Node*head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

int main()
{
    Node * head = nullptr;
    insertatbeginning(head,10);
    insertatbeginning(head,20);
    insertatbeginning(head,30);
    insertatbeginning(head,40);
    display(head);
    return 0;
}