#include <iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=nullptr;
        this->prev=nullptr;
    }  
};
class Doublylinkedlist{
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
            temp->prev = tail; 
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
            head->prev = temp;
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
            Node* t = new Node(val);
            Node* temp = head; 
            for(int i=1; i<=idx-1;i++)
            {
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev = temp;
            t->next->prev = t;
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
        if(size==0){
            cout<<"list ie empty";
            return;
        }
        head=head->next;
        if(head) head->prev = NULL;
        if(head==NULL) tail = NULL;
        size--;
    }
    void deleteAtTail()
    {
        if(size==0) cout<<"size is empty";
        else if(size==1)
        {
            deleteathead();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
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
    Doublylinkedlist list ;
    list.insertatend(10);
    list.insertatend(20);
    list.insertatend(30);
    list.display();
    list.insertatend(40);
    list.display();
    list.insertathead(50);
    list.display();
    list.insertaidx(2,60);
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteathead();
    list.display();
    return 0;
}