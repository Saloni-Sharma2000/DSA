#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int subsequences(string name,string op[])
{
    if(name=="\0")
    {
        op[0]="";
        return 1;
    }
    int count=subsequences(name.substr(1),op);
    for(int i=0;i<count;i++)
    {
        op[count+i]=name[0]+op[i];
    }
    return 2*count;
}
int main()
{
    string name;
    cin>>name;
    string *p=new string[(int)pow(2,name.length())];
    int count=subsequences(name,p);
    for(int i=0;i<count;i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}
