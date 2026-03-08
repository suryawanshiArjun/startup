#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    
    Node(int v)
    {
        val=v;
        next=nullptr;
    }
};
void display(Node* head)
{
    Node* temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<"\n";
    
}
void displayrecursion(Node* head)
{
    if(head==nullptr) return;
    displayrecursion(head->next);
    cout<<head->val<<" ";
}
void displayrec(Node* head)
{
    if(head==nullptr) return;
    cout<<head->val<<" ";
    displayrecursion(head->next);
}
int main()
{
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);
    Node* f= new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    display(a);
    displayrecursion(a);
    cout<<"\n";
    displayrec(a);
    return 0;
}