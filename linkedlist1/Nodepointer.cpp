#include <iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int v)
    {
        val=v;
        next=NULL;
    }
};
void display(Node* head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void displayrec(Node* head)
{
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
int size(Node* head)
{
    Node* temp=head;
    int n=0;
    cout<<"\n";
    while (temp!=NULL)
    {
        n++;
        temp=temp->next;
    }
   return n; 
}
void revdisplay(Node* head)
{
    if(head==NULL) return;
    revdisplay(head->next);
    cout<<head->val<<" ";
}
void insertatend(Node* head, int val)
{
    Node* t = new Node(val);
    if(head==NULL)
    {
        head=t;
        return;
    }
    while(head->next!= NULL)
    head = head->next;
    head->next=t;
}
int main()
{
   Node* a=new Node(10);
   Node* b=new Node(200);
   Node* c=new Node(30);
   Node* d=new Node(50);
   a->next=b;
   b->next=c;
   c->next=d;
   Node* temp =a;
//    while(temp!=NULL)
//    {
//     cout<<temp->val<<" ";
//     cout<<temp->next;
//    }
// cout<<"Display with recursion"<<endl;
// displayrec(a);
// cout<<endl;
// cout<<"Display without recursion"<<endl;
// display(a);
// cout<<"Reverse order"<<endl;
// revdisplay(a);
// cout<<endl;
insertatend(a,65);
display(a);
cout<<"size of linked list";
cout<<size(a);
}