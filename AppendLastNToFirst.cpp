#include<iostream>
#include "Node1.cpp"
using namespace std;

int length(Node1 *head)
{
    if(head==NULL)
    {
        return 0;
    }
    int len=length(head->next);
    return len+1;
}
/*
n should be global
lastNodeAddress should be global
NewNodeAddress should be global

Node* AppendLastNToFirst(Node1 *h,int* n,Node1* lastNodeAddress,Node1* NewNodeAddress,int i=1)
{
    if(h==NULL)
    {
        return NULL;
    }
    Node* c=AppendLastNToFirst(h->next,n,lastNodeAddress,i+1);
    n--;
    i--;
    if(c==NULL)
    {
        lastNodeAddress=h;
    }
    if(n==-1)
    {
        head=h->next;
        h->next=NULL;
    }
    if(i==0)
    {
        lastNodeAddress->next=h;
    }
    return h;
}
*/
Node1* AppendLastNToFirst(int pos,Node1 *head)
{
    while(pos!=0)
    {
        Node1 *t=head->next;
        Node1 *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        head->next=NULL;
        head=t;
        pos--;
    }
    return head;
}
Node1* takeInput(){
    int dt;
    cin>>dt;
    if(dt==-1){
        return NULL;
    }
    Node1 *head=NULL,*tail=NULL;
    Node1 *newnode=new Node1(dt);
    if(head==NULL ){
        head=newnode;
        tail=newnode;
    }
    Node1 *temp=head;
    cin>>dt;
    while(dt!=-1){
        Node1 *newnode=new Node1(dt);
        tail->next=newnode;
        tail=newnode;
        cin>>dt;
    }
    return head;
}

void print(Node1 *head)
{
    if(head==NULL)
    {
        cout<<"\nSorry no Linked List....\n";
        return;
    }
    while(head!=NULL)
    {
        cout<<head->a<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    Node1 *ptr=takeInput();
    print(ptr);
    int pos;
    cin>>pos;
    int temp=length(ptr);
    Node1 *temp1=AppendLastNToFirst((temp-pos),ptr);
    print(temp1);
    return 0;
}