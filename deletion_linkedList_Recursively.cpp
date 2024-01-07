#include<iostream>
#include "Node1.cpp"
using namespace std;

Node1* Delete(int pos,Node1 *head)
{
    if(head==NULL && pos!=0)
    {
        cout<<"No Pos"<<endl;
        return head;
    }
    if(pos==0)
    {
        Node1 *ptr=head->next;
        delete head;
        return ptr;
    }
    Node1 *p=Delete(pos-1,head->next);
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

int main()
{
    Node1 *ptr=takeInput();
    print(ptr);
    int pos;
    cin>>pos;
    ptr=Delete(pos,ptr);
    print(ptr);
    return 0;
}