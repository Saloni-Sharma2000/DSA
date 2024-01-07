#include<iostream>
#include "Node1.cpp"
using namespace std;
//Find Function Is Not Work Properly.
//A New File Is In Repo Name Is- Find_Node_S_LL.cpp Please Check That File And Sorry For Mistake.
int find(int pos,Node1 *head)
{
    if(head==NULL)
    {
        return -1;
    }
    if(head->a==pos)
    {
        return 0;
    }
    int p=find(pos,head->next);
    return p+1;
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
    int temp=find(pos,ptr);
    cout<<temp;
    return 0;
}