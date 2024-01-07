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

void  Eliminate_duplicates_from_LL(Node1 *head)
{
    if(head==NULL)
    {
        return;
    }
    Node1 *h1=head;
    Node1 *t1=head->next;
    while(t1!=NULL)
    {
        if(h1->a==t1->a)
        {
            Node1 *temp=t1;
            t1=t1->next;
            delete temp;
            h1->next=t1;
        }
        else
        {
            h1->next=t1;
            h1=t1;
            t1=t1->next;
        }
    }

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
    Eliminate_duplicates_from_LL(ptr);
    print(ptr);
    return 0;
}