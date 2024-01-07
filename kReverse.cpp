#include<iostream>
#include"Node1.cpp"
using namespace std;
struct ReverseReturnValue{             // Structure declaration
  Node1 *head=NULL;
  Node1 *tail=NULL;
};
ReverseReturnValue Reverse(Node1* head)
{
    if(head==NULL || head->next==NULL)
    {
        ReverseReturnValue t;
        t.head=head;
        t.tail=head;
        return t;
    }
    ReverseReturnValue temp=Reverse(head->next);
    Node1 *temp1=temp.head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=head;
    head->next=NULL;
    ReverseReturnValue t;
    t.head=temp.head;
    t.tail=head;
    return t;
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
Node1* kReverse(Node1 *nodePtr,int limit,int length)
{
    if(nodePtr==NULL)
    {
        return NULL;
    }
    ReverseReturnValue tempLinkList;
    ReverseReturnValue tempLinkListReverse;
    if(length>=limit)
    {
        Node1 *tempPtr=NULL;
        tempPtr=nodePtr;
        for(int i=0;i<limit-1;i++)
        {
            tempPtr=tempPtr->next;
        }
        Node1 *head=tempPtr->next;
        tempPtr->next=NULL;
        tempLinkList =Reverse(nodePtr);
        Node1 *res=kReverse(head,limit,length-limit);
        if(res==NULL)
        {
            return tempLinkList.head;
        }
        else{
            tempLinkList.tail->next=res;
            return tempLinkList.head;
        }
    }
    else{
        tempLinkListReverse=Reverse(nodePtr);
        // tempLinkList.tail=tempLinkListReverse.head;
        return tempLinkListReverse.head;
    }

}
int main(){
    Node1 *ptr=takeInput();
    // kReverse()
    print(kReverse(ptr,4,length(ptr)));
    return 0;
}