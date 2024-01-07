#include<iostream>
using namespace std;
int multiply(int n, int m)
{
    if(m==0)
    {
        return 0;
    }
    int sm= multiply(n,m-1);
    return sm+n; 
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<multiply(n,m);
}