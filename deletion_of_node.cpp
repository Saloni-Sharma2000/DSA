#include<iostream>
#include "Node1.cpp" 
using namespace std;
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
void deletion(int p,Node1* &head)
{
    if(head==NULL)
    {
        cout<<"\nSorry no Linked List....\n";
        return;
    }
    if(p==0)
    {
        Node1 *temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node1 *temp1=head;
    while(p!=1)
    {
        temp1=temp1->next;
        p--;
    }
    Node1 *temp=temp1->next;
    temp1->next=(temp1->next)->next;
    delete temp;
}
int main()
{
    Node1 *ptr=takeInput();
    print(ptr);
    int pos;
    cin>>pos;
    deletion(pos,ptr);
    print(ptr);
    return 0;
}