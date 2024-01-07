#include<iostream>
#include "Node1.cpp"
using namespace std;

Node1* Reverse(Node1* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node1 *temp=Reverse(head->next);
    Node1 *temp1=temp;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=head;
    head->next=NULL;
    return temp;
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
    Node1 *prev=NULL,*current=ptr,*next=ptr->next;
    while(next!=NULL)
    {
        current->next=prev;
        prev=current;
        current=next;
        next=next->next;
    }
    current->next=prev;
    prev=current;
    current=NULL;
    print(prev);
    return 0;
}