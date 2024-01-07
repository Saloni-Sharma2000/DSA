#include<iostream>
using namespace std;
#include "Node.cpp"
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase!=0)
    {
        int d;
        cin>>d;
        Node linkedlist(d);
        int len=linkedlist.takeInput();
        cout<<len<<endl;
        testcase--;
    }
    return 0;
}
