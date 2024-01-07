#include<iostream>
#include<string>
using namespace std;
bool check_ab(string s, int c)
{
    if(s.length()==0)
    {
        return true;
    }
    if((s[0]=='b' && s[1]=='b') && c !=0 )
    {
        c++;
        return (check_ab(s.substr(2),c));
    }
    if(s[0]=='a')
    {
        c++;
        return (check_ab(s.substr(1),c));
    }
    else
    {
        return false;
    }
}
int main()
{
    string s;
    cin>>s;
    cout<<check_ab(s,0);
    return 0;
}