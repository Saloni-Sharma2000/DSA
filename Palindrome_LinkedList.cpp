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

void  Check_Pallindrome(Node1 *head)
{
    int mid=(length(head)/2);
    Node1 *h2=head;
    Node1 *h3;
    while(mid!=1)
    {
        h2=h2->next;
        mid--;
    }  
    h3=h2->next;
    h2->next=NULL;
    Node1 *h4=NULL;
    while(h3!=NULL)
    {
        Node1 *temp=new Node1(h3->a);
        temp->next=h4;
        h4=h3;
        h3=h3->next;
        delete h4;
        h4=temp;
    }
    h2=head;
    while(h4!=NULL && h2!=NULL)
    {
        if(h2->a==h4->a)
        {
            h2=h2->next;
            h4=h4->next;
        }
        else{
            cout<<"False"<<endl;
            return;
        }
    }
    cout<<"True"<<endl;
}

void  Print_Reverse_LL(Node1 *head)
{
    if(head==NULL)
    {
        return;
    }
    Print_Reverse_LL(head->next);
    cout<<head->a<<" ";
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
    Check_Pallindrome(ptr);
    return 0;
}