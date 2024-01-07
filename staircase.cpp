#include<iostream>
using namespace std;
int staircase(int num)
{
    if(num<0)
    {
        return 0; 
    }
    else if(num==0)
    {
        return 1;
    }
    int x=staircase(num-1);
    int y=staircase(num-2);
    int z=staircase(num-3);
    return x+y+z;
}
int main()
{
    int n;
    cin>>n;
    cout<<staircase(n);
    return 0;
}