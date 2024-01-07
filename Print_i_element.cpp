#include<iostream>
using namespace std;
#include "Node.cpp"
int main()
{
    int n,data,len=0;
    cin>>n;
    while(n!=0)
    {
        int pos;
        cin>>data;
        Node node1(data);
        cout<<node1.takeInput()<<endl;
        cin>>pos;
        cout<<node1.get_find(pos)<<endl;
        n--;
    }
    return 0;
}