#include<iostream>
#include "Node1.cpp"
using namespace std;

Node1* insert(int pos,int data,Node1 *head)
{
    if(head==NULL)
    {
        cout<<"Loc";
        return head;
    }
    if(pos==0)
    {
        Node1 *ptr=new Node1(data);
        ptr->next=head;
        return ptr;
    }
    Node1 *p=insert(pos-1,data,head->next);
    head->next=p;
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

int Find(int data,Node1 *head)
{
    if(head==NULL)
    {
        return -1;
    }
    else if(data==head->a)
    {
        return 0;
    }
    int index=Find(data,head->next);
    if(index==-1)
    {
        return index;
    }
    else{
        return index+1;
    }
}
Node1* EvenAfterOdd_LL(Node1 *head)
{
    Node1 *oddHead=NULL,*oddTail=NULL,*evenHead=NULL,*evenTail=NULL;
    while(head!=NULL)
    {
        if(head->a%2==0)
        {
            if(evenHead==NULL)
            {
                evenHead=head;
                evenTail=head;
                head=head->next;
            }
            else
            {
                evenTail->next=head;
                evenTail=head;
                head=head->next;
            }
        }
        else
        {
            if(oddHead==NULL)
            {
                oddHead=head;
                oddTail=head;
                head=head->next;
            }
            else
            {
                oddTail->next=head;
                oddTail=head;
                head=head->next;
            }
        }
    }
    if(oddHead==NULL)
    {
        evenTail->next=NULL;
        return evenHead;
    }
    else if(evenHead==NULL)
    {
        oddTail->next=NULL;
        return oddHead;
    }
    else{
        oddTail->next=evenHead;
        evenTail->next=NULL;
        return oddHead;
    }
}

int main()
{
    Node1 *ptr=takeInput();
    print(ptr);
    print(EvenAfterOdd_LL(ptr));
    return 0;
}