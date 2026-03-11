// The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display
// functions.
#include <iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int v)
    {
        val = v;
        next=NULL;
    }
};
class linkedlist
{
    public:
    Node* head;
    Node* tail;
    int size = 0;
    linkedlist(){
        head= tail=NULL;
        size=0;
    }
    void insertathead(int val)
    {
        Node* temp = new Node(val);
        if(size==0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            temp->next=head;
            head=temp;
            size++;
        }
    }
    void insertattail(int val)
    {
        Node* temp = new Node(val);
        if(size==0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            size++;
        }
    }
    void insertatindex(int idx, int val)
    {
        Node* temp = head;
        Node* t = new Node(val);
        if(size==0)
        {
            head = tail = t;
            size++;
        }
        else if(idx==(size)) insertattail(val);
        else
        {
            for(int i=1; i<idx; i++)
            {
                temp= temp->next;
            }
            t->next= temp->next;
            temp->next=t;
            
            size++;
        }
    }
    void deleteathead()
    {
        if(size==0)
        cout<<"List is empty:";
        else
        {
            head=head->next;
            size--;
        }
    }
    void deleteattail()
    {
        Node* temp = head;
        if(size==0)
        {
            cout<<"List is empty:";
        }
        else if(size==1)
        {
            head = tail = NULL;
        }
        else 
        {
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next= NULL;
            tail=temp;
            size--;
        }
    }
    void deleteatindex(int idx)
    {
        Node* temp=head;
        if(size==0)
        {
            cout<<"Size is empty";
            return;
        }
        if(idx<0 || idx >=size) {
            cout<<"Invalid index";
             return;
        }
        if(idx==0) deleteathead();
        else if(idx==(size-1)) deleteattail();
        else
        {
            for(int i=1; i<=idx-1; i++)
            {
                temp=temp->next;
            }
            temp->next= temp->next->next;
            size--; 
        }
    }
    void getindex()
    {
        Node* temp = head;
        cout<<"The value at indices are:\n";
        for(int i=0; i<size; i++)
        {
            cout<<i<<" = "<<temp->val<<"\n";
            temp=temp->next;
        }
    }
    void display()
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
};
int main()
{
    linkedlist ll;
    ll.insertathead(40);
    ll.display();
    ll.insertathead(60);
    ll.display();
    ll.insertathead(70);
    ll.display();
    ll.insertatindex(2,80);
    ll.display();
    ll.insertattail(90);
    ll.display();
    ll.deleteattail();
    ll.display();
    ll.deleteatindex(2);
    ll.display();
    ll.getindex();
    return 0;
}