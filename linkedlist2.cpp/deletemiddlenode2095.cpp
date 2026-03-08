#include <iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int v)
    {
        val=v;
        next=NULL;
    }
};
ListNode* deletemiddle(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head->next->next;
    if(head==NULL || head->next==NULL)
    return NULL;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=slow->next->next;
    return head;
}
void display(ListNode* head)
{
    ListNode* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int idx;
    ListNode* a=new ListNode(10);
    ListNode* b=new ListNode(200);
    ListNode* c=new ListNode(30);
    ListNode* d=new ListNode(50);
    a->next=b;
    b->next=c;
    c->next=d;
    a=deletemiddle(a);
    display(a);
}