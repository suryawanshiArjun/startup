#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int val)
    {
        data=val;
        next= nullptr;
    }
};

void insertatbeginning(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if(head==nullptr)
    {
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
}
void display(Node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data;
        cout<<" ";
        head=head->next;
    }
    cout<<"\n";
}
int main()
{
    Node* head= nullptr;
    insertatbeginning(head,10);
    insertatbeginning(head, 20);
    insertatbeginning(head, 30);
    insertatbeginning(head, 40);
    insertatbeginning(head,50);
    display(head);
    return 0;
}