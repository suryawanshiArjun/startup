// leetcode         [237].
#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v)
    {
        val=v;
        next=NULL;
    }
};
Node* deletenode(Node* head, Node* tar)
{
    if(head== tar)
    {
        head = head->next;
        return head;
    }
    Node* temp= head;
    while(temp->next!=tar)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
void display(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
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
   Node* head = a;
   display(head);
   head = deletenode(a,a);
   display(head);
}