#include<iostream>
using namespace std;
int len(char s[])
{
    if(s[0]=='\0'){
        return 0;
    }
    int count=0;
    count=len(s+1);
    count++;
    return count;
}
int main()
{
    char str[100];
    cin>>str;
    int l=len(str);
    cout<<l<<endl;
    return 0;
}