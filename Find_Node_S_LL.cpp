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
int findLLR(int data,Node1 *h,int i=0)
{
    if(h==NULL || h->a==data)
    {
        return h!=NULL?i:-1;
    }
    int temp=findLLR(data,h->next,i+1);
    return temp;
}
/*int Find(int data,Node1 *head)
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
}*/

int main()
{
    Node1 *ptr=takeInput();
    print(ptr);
    int data;
    cin>>data;
    // cout<<Find(data,ptr);
    cout<<findLLR(data,ptr);
    return 0;
}