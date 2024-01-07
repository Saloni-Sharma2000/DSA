#include<iostream>
#include"Node1.cpp"
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
    cin>>dt;
    while(dt!=-1){
        Node1 *newnode=new Node1(dt);
        tail->next=newnode;
        tail=newnode;
        cin>>dt;
    }
    tail->next=head;
    return head;
}

void print(Node1 *head)
{
    if(head==NULL)
    {
        cout<<"\nSorry no Linked List....\n";
        return;
    }
    Node1 *temp=head;
    head=head->next;
    cout<<temp->a<<" ";
    while(head!=temp)
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
    return 0;
}