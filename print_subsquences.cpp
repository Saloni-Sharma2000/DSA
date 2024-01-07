#include<iostream>
#include<string>
using namespace std;
void print_subsq(string st,string output)
{
    if(st.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    print_subsq(st.substr(1),output);
    print_subsq(st.substr(1),output+st[0]);
}
int main()
{
    string st,output="";
    cin>>st;
    print_subsq(st,output);
    return 0;
}