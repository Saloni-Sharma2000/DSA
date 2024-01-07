#include<iostream>
using namespace std;
void rp(char s[])
{
    //cout<<"1-"<<s<<endl;
    if(s[0]=='\0')
    {
        return;
    }
    rp(s+1);
    if(s[0]==s[1])
    {
        int i=1;
        for(;s[i]!='\0';i++)
        {
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        //cout<<s<<endl;
        return;
    }
    //
    cout<<s<<endl;
}
int main()
{
    char s[50];
    cin>>s;
    rp(s);
    cout<<s;
    return 0;
}