#include<iostream>
#include<string>

using namespace std;
string remove_x(string info)
{
    if(info.length()==0)
    {
        return"";
    }
    string sm=remove_x(info.substr(0+1,info.length()));
    if(info[0]!='x')
    {
        sm=(info.substr(0,1))+sm;
        return sm;
    }
    return sm;
}
int main(){
    string name;
    cin>>name;
    //cout<<name;
    cout<<remove_x(name);
    return 0;
}