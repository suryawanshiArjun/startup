#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

class Linkedlist
{
    public:
    Node* head;
    Node* tail;
    int size;

    Linkedlist(){
        head=tail=NULL;
        size=0;
    }

    void insertattail(int val)
    {
        Node* newNode = new Node(val);
        Node* temp = head;
        if(head == NULL)
        {
            head=tail=newNode;
            size++;
            return;
        } 
        else{
            tail->next=newNode;
            tail = newNode;
            size++;
        }
        
    }
    void insertathead(int val)
    {
        Node* newNode =new Node(val);
        Node* temp= head;
        if(head == NULL)
        {
            head= tail = newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
        size++;
    }
    void deleteathead()
    {
        if(size==0) cout<<"List is Empty";
        else if(size == 1)
        { 
            head = tail = NULL; 
            size--;
        }
        else{
            head=head->next;
            size--;
        } 
        
    }
    void deleteattail()
    {
        if(size==0)
        {
            cout<<"List is Empty";
        }
        else if(size==1)
        {
            head= tail=NULL;
            size--;
        }
        else{
            Node* temp =head;
            while(temp->next!=tail)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }
    void deleteatindex(int idx)
    {
        if(size==0)
        {
            cout<<"List is Empty";
        }
        else if(size==1)
        {
            head= tail=NULL;
            size--;
        }
        else{
            Node* temp = head;
            for(int i=0; i<idx-1; i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }        
    }
    void insertatidx(int idx, int val)
    {
        Node* newNode = new Node(val);
        if(idx<0 || idx>size) cout<<"Invalid index";
        else if(idx == 0) insertathead(val);
        else if(idx==size) insertattail(val);
        else
        {
            Node* temp = head;
            for(int i=1; i<=idx-1; i++)
            {
                temp=temp->next;
            }
            newNode->next=temp->next;
            temp->next=newNode;
            size++;
        }
    }
    void display()
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data;
            cout<<" ";
            temp=temp->next;
        }
        cout<<"->NULL\n";
    }
};

int main()
{
    Linkedlist ll;
    ll.insertattail(10);
    ll.display();
    ll.insertattail(20);
    ll.display();
    ll.insertattail(30);
    ll.display();
    ll.insertattail(40);
    ll.display();
    ll.insertattail(50);
    ll.display();
    ll.insertattail(60);
    ll.display();
    ll.insertattail(70);
    ll.display();
    ll.insertattail(80);
    ll.display();
    ll.insertattail(90);
    ll.display();
    ll.insertathead(100);
    ll.display();
    ll.insertatidx(5,1100);
    ll.display();
    ll.deleteathead();
    ll.display();
    ll.deleteattail();
    ll.display();
    ll.deleteatindex(4);
    ll.display();
    return 0;
}