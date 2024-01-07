#include<iostream>
#include<string>
#include<vector>

using  namespace std;
string replace_pi(string p)
{
    //cout<<p.length()<<"\n";
    //cout<<p<<endl;
    if(p.length()<=1)
    {
        return p;
    }
    string sm=replace_pi(p.substr(0+1,p.length()));
    if(p[0]=='p' && sm[0]=='i')
    {
        return(sm="3.14"+(sm.substr(1,sm.length())));
    }
    return(sm=p[0]+sm);
}
int main()
{
    string info;
    //vector<string> info1;
    cin>>info;
    //string p=info+1;
    //cout<<info[13]<<endl;
    //cout<<info.length();

    cout<<replace_pi(info); 
    return 0;
}