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
ListNode* middleNode(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=slow->next->next;
    return slow;
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
    ListNode* s=new ListNode(10);
    ListNode* t=new ListNode(200);
    ListNode* u=new ListNode(30);
    ListNode* v=new ListNode(70);
    ListNode* w=new ListNode(80);
    ListNode* x=new ListNode(90);
    s->next=t;
    t->next=u;
    u->next=v;
    v->next=w;
    w->next=x;
    s=middleNode(s);
    display(s);
}