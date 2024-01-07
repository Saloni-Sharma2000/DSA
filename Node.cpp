class Node{
    int a;
    Node *next;
    public:
    Node *head;
        Node(int data)
        {
            a=data;
            next=NULL;
            head=NULL;
        }
        int takeInput()
        {
            int dta=a,length=1;
            Node* tail=NULL;
            while (dta!=-1)
            {
                if(head==NULL)
                {
                    Node *n=new Node(a);
                    head=n;
                    tail=n;
                    length++;
                }
                else
                {
                    Node *n=new Node(dta);
                    tail->next=n;
                    tail=n;
                    length++;
                }
                cin>>dta;
            }
            return length;            
        }
        int get_find(int index)
        {
            Node *temp=head;
            if(temp!=NULL)
            {
                for(int i=1;(i<=index && temp!=NULL);i++)
                {
                    if(i==index)
                    {
                        return temp->a;
                    }
                    temp=temp->next;
                }
            }
            else
                cout<<"\nNo LinkedList..";
            return 0;
        }

};