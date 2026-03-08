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
class linkedlist{
    public:
    Node* head;
    Node* tail;
    int size=0;
    linkedlist(){
        head=tail=NULL;
        size=0;
    };
    void insertatend(int val)
    {
        Node* temp = new Node(val);
        if(size==0)
        {
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertathead(int val)
    {
        Node* temp = new Node(val);
        if(size==0)
        {
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertaidx(int idx, int val)
    {
        Node* t = new Node(val);
        Node* temp=head;
        if(idx<0 || idx>size) cout<<"Invalid index";
        else if(idx==0) insertathead(val);
        else if(idx==(size)) insertatend(val);
        else{
            for(int i=1; i<=idx-1;i++)
            {
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
        }
        size++;
    }
    int getAtIdx(int idx)
    {
        if(idx<0 || idx>=size) {
            cout<<"Invalid index"; 
            return-1;
        }
        else if(idx==0) return head->val;
        else if(idx==(size-1)) return tail->val;
        else{
            Node* temp = head;
            for(int i=0; i<idx;i++)
            {
                temp=temp->next;
            }
            return temp->val;
            cout<<"\n";
        }
        cout<<"\n";
    }
    void deleteathead()
    {
        cout<<"\n";
        if(size==0){
            cout<<"list ie empty";
            return;
        }
        head=head->next;
        size--;
    }
    void deleteAtTail()
    {
        if(size==0) cout<<"size is empty";
        Node* temp=head;
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIndex(int idx)
    {
        if(size==0)
        {
            cout<<"Size is empty";
            return;
        }
        if(size<0 || idx >=size) {
            cout<<"Invalid index";
             return;
        }
        else if(idx==0) return deleteathead();
        else if(idx==(size-1)) return deleteAtTail();
        else
        {
            Node* temp =head;
            for(int i=0; i<idx; i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display()
    {
        Node* temp= head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    linkedlist ll;
    ll.insertatend(20);
    ll.display();
    ll.insertatend(30);
    ll.display();
    ll.insertathead(10);
    ll.display();
    ll.insertathead(11);
    ll.display();
    ll.insertaidx(2,90);
    ll.display();
    cout<<ll.getAtIdx(4);
    ll.deleteathead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIndex(2);
    ll.display();
}