#include<iostream>
#include <math.h>
using namespace std;
int row;
int subset_to_k(int arr[],int n,int *output,int k)
{
    //cout<<n<<"L ";
    //cout<<k<<"S ";
    //cout<<arr[0]<<endl;

    if(n==0)
    {
        if(k==0)
        {
            *(output+0*(n+1)+0)=0;
            //cout<<*(output+0*(n+1)+0)<<endl;
            return 1;
        }
        else{
            return 0;
        }
    }
    int output1[n][n];    
    int output2[n][n];
    int l1=subset_to_k(arr+1,n-1,(int *)output1,(k-arr[0]));
    int l2=subset_to_k(arr+1,n-1,(int *)output2,k);
    for(int i=0;i<l1;i++)
    {
        *(output+i*n+0)=output1[i][0]+1;
        *(output+i*n+1)=arr[0];
        for(int j=2;j<=(output1[i][0]+1);j++ )
        {
            *(output+i*n+j)=output1[i][j-1];
        }

    }
    for(int i=0;i<l2;i++)
    {
        *(output+(i+l1)*n+0)=output2[i][0];
        for(int j=1;j<=(output1[i][0]+1);j++ )
        {
            *(output+(i+l1)*n+j)=output2 [i][j];
        }

    }
    return l1+l2;
}
int main()
{
    int k;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
    cin>>k;
    row=pow(2,n);
    int output[row][n];
    int rw=subset_to_k(arr,n,(int *)output,k);
    for(int i=0;i<rw;i++)
    {
        for(int j=1;j<=output[i][0];j++)
        {
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}