#include<iostream>
#include<vector>
#include <string>
using namespace std;
string info[9];
void keypad(int num,vector<string> &p)
{
    if(num==0)
    {
        p.push_back("");
        return;
    }
    int m=num%10;
    num=num/10;
    keypad(num,p);
    int len=info[m].length();
    int len1=p.size();
    int j=0;
    for(int i=0;i<((len*len1)-len1);i++)
    {
        if(j>=len1)
        {
            j=0;
        }
        if(j>=0 && j<len1)
        {
            p.push_back(p.at(j));
            j++;
        }
    }
    int k=0,count=0;
    for(int i=0;i<len*len1;i++)
    {
        if(count==p.size()/len)
        {
            k++;
            count=0;
        }
        p[i]=p[i]+info[m][k];
        count++;
    }

}
int main()
{
    info[0]="NULL";
    info[1]="NULL";
    info[2]="abc";
    info[3]="def";
    info[4]="ghi";
    info[5]="jkl";
    info[6]="mno";
    info[7]="pqrs";
    info[8]="tuv";
    info[9]="wxyz";
    int num;
    cin>>num;
    vector<string> p;
    keypad(num,p);
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}