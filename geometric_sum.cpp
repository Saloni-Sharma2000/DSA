#include<iostream>
#include<math.h>
using namespace std;

float geom_sum(int n)
{
    if(n==0)
    {
        return 1;
    }
    float sum=0;
    sum= geom_sum(n-1);
    sum+=(1/(pow(2,n)));
    return sum;
}
int main()
{
    int k;
    cin>>k;
    cout<<geom_sum(k);
    return 0;
}