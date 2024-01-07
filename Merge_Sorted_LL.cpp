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

int length(Node1 *head)
{
    if(head==NULL)
    {
        return 0;
    }
    int len=length(head->next);
    return len+1;
}

Node1* merge(Node1 *h1,Node1 *h2)
{
    Node1 *fh=NULL,*ft=NULL;
    if(h1->a<=h2->a)
    {
        fh=h1;
        ft=h1;
        h1=h1->next;
    }
    else{
        fh=h2;
        ft=h2;
        h2=h2->next;
    }
    while(h1!=NULL && h2!=NULL)
    {
        if(h1->a<=h2->a)
        {
            ft->next=h1;
            ft=h1;
            h1=h1->next;
        }
        else
        {
            ft->next=h2;
            ft=h2;
            h2=h2->next;
        }
    }
    if(h1==NULL)
    {
        ft->next=h2;
    }
    else
    {
        ft->next=h1;
    }
    return fh;
}

Node1* merge_LL(Node1 *h)
{

    if(length(h)==1)
    {
        return h;
    }
    int mid=((length(h)-1)/2);
    Node1 *h2=h;
    Node1 *h3;
    while(mid!=0)
    {
        h2=h2->next;
        mid--;
    }  
    h3=h2->next;
    h2->next=NULL;
    Node1* temp1=merge_LL(h);
    Node1* temp2=merge_LL(h3);
    return merge(temp1,temp2);
}

int main()
{
    Node1 *ptr=takeInput();
    print(ptr);
    print(merge_LL(ptr));
    return 0;
}