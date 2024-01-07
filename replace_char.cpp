#include<iostream>
using namespace std;
void rp(char s[],char a,char b)
{
    if(s[0]=='\0'){
        return;
    }
    rp(s+1,a,b);
    if(s[0]=='a')
    {
        s[0]='x';
        return;
    }
}
int main()
{
    char a1[100];
    cin>>a1;
    char a,b;
    cin>>a;
    cin>>b;
    rp(a1,a,b);
    cout<<a1;
    return 0;
}