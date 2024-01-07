#include<iostream>
#include"Double_LL_Node.cpp"
using namespace std;
D_LL_Node* takeInput()
{
    int data;
    cin>>data;
    D_LL_Node *head=NULL,*tail=NULL;
    while(data!=-1)
    {
        if(head==NULL)
        {
            D_LL_Node *ptr=new D_LL_Node(data);
            head=ptr;
            tail=ptr;
        }
        else{
            D_LL_Node *ptr=new D_LL_Node(data);
            tail->next=ptr;
            ptr->prev=tail;
            tail=ptr;
        }
        cin>>data;
    }
    head->prev=tail;
    tail->next=head;
    return head;
}
void print(D_LL_Node *t,D_LL_Node *v)
{
    if(t==v)
    {
        return;
    }
    cout<<t->a<<" ";
    print(t->next,v);
}
int main()
{
    D_LL_Node *head=takeInput();
    cout<<head->a<<" ";
    print(head->next,head);
    return 0;
}