class D_LL_Node{
    public:
    int a;
    D_LL_Node *next=NULL,*prev=NULL;
    D_LL_Node(int data)
    {
        a=data;
        next=NULL;
        prev=NULL;
    }
};