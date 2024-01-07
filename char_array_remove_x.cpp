#include<iostream>
using namespace std;
void rm(char a[]){
    if(a[0]=='\0')
    {
        return;
    }
    if(a[0]=='x')
    {
        int i=1;
        for(;a[i]!='\0';i++)
        {
            a[i-1]=a[i];
        }
        a[i-1]=a[i];
        rm(a+1);
    }
    else{
        rm(a);
    }
}
int main()
{
    char s[50];
    cin>>s;
    rm(s);
    cout<<"\n"<<s;
    return 0;
}