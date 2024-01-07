#include<iostream>

using namespace std;
int count_zero(int num)
{
   if(num==0)
    {
        return 0;
    }
    int count=0;
    count=count_zero(num/10);
    if(num%10==0)
    {
        count++;
    }
    return count;
}
int main()
{
    int num;
    cin>>num;
    cout<<count_zero(num);
    return 0;
}