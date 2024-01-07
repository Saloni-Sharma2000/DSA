#include<iostream>
#include <string>
using namespace std;
string info[9];
void print_keypad(int num, string output)
{
    if(num==0)
    {
        cout<<output<<endl;
        return;
    }
    int n=num%10;
    num=num/10;
    int len=info[n].length();
    for(int i=0;i<len;i++)
    {
        print_keypad(num,info[n][i]+output);
    }

}
int main()
{
    info[0]="";
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
    string output;
    cin>>num;
    print_keypad(num,output);
    return 0;
}