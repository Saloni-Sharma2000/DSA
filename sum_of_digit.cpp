#include<iostream>

using namespace std;
int sum_digit(int num1)
{
    if(num1==0)
    {
        return 0;
    }
    int sm=sum_digit(num1/10);
    return ((num1%10)+sm);

}
int main()
{
    int num;
    cin>>num;
    cout<<sum_digit(num);
    return 0;
}