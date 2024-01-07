#include<iostream>
#include "Node1.cpp"
using namespace std;
class Pair
{
    public:
        Node1 *head;
        Node1 *tail;
};
Pair Reverse(Node1* head)
{
    if(head==NULL || head->next==NULL)
    {
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    Pair a=Reverse(head->next);
    a.tail->next=head;
    head->next=NULL;
    a.tail=head;
    return a;
}

Node1* Convert_Pair_Into_Node1(Pair a)
{
    //cout<<a.head<<" "<<a.tail<<endl;
    return a.head;
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
    print(Convert_Pair_Into_Node1(Reverse(ptr)));
    return 0;
}