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
            ptr->prev=head;
            tail=ptr;
        }
        cin>>data;
    }
    return head;
}
void print(D_LL_Node *t)
{
    if(t==NULL)
    {
        return;
    }
    cout<<t->a<<" ";
    print(t->next);
}
int main()
{
    D_LL_Node *head=takeInput();
    print(head);
    return 0;
}