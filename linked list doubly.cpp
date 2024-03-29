#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertathead(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertattail(node* &tail,int d)
{
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertatpos(node* &head,int pos,int d)
{
    node* temp=head;
    int cnt=1;
    while(cnt<pos)
    {
        temp=temp->next;
        cnt++;
    }
    node *abc=new node(d);
    
    abc->next=temp->next;
    temp->next->prev=abc;

    temp->next=abc;
    abc->prev=temp;
}

void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



int main()
{
    node *node1=new node(10);
    node* head=node1;
    node* tail=node1;

    insertathead(head,20);
    insertathead(head,30);

    insertathead(head,50);
    insertattail(tail,-10);
    insertattail(tail,-20);
    insertatpos(head,4,90);
    print(head);
}