#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    string s,temp;
    cin>>s;
    map<char,char> m;
    for(int i=0;i<s.length();i++)
    {
        if(m.count(s[i])>0)
        {
            continue;
        }
        else{
            m[s[i]]=s[i];
            temp+=s[i];
        }
        m[s[i]]=s[i];
    }
    cout<<m.size()<<endl;
    cout<<temp<<endl;
    return 0;
}
