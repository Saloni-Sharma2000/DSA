#include<iostream>
using namespace std;
void print_subset(int a[],int n,int sum,int output[],int size)
{
    if(n==0)
    {
        if(sum==0)
        {
            for(int i=1;i<=output[0];i++)
            {
                cout<<output[i]<<" ";
            }
            cout<<endl;
            return;
        }
        else
        {
            return;
        }
    }
    int output1[size]={0};
    for(int i=0;i<=output[0];i++)
    {
        output1[i]=output[i];
    }
    output1[0]++;
    output1[output1[0]]=a[0];
    print_subset(a+1,n-1,sum-a[0],output1,size);
    print_subset(a+1,n-1,sum,output,size);
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    print_subset(a,n,k,b,n+1);
    return 0;
}