#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int convert_int(string name)
{
    //cout<<name<<" "<<name.length()<<endl;
    if(name.length()==1)
    {
        //cout<<"1 "<<((int)name[0]-'0')<<endl;
        return ((int)name[0]-'0');
    }
    int digit=convert_int(name.substr(0+1,name.length()));
    //cout<<digit<<endl;
    digit+=pow(10,name.length()-1)*((int)name[0]-'0');
    //cout<<digit<<endl;
    return digit;
}
int main()
{
    string number;
    cin>>number;
    //cout<<number.length();
    cout<<convert_int(number);
    return 0;
}