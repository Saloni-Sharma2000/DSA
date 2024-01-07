#include<iostream>
using namespace std;
void merge_two(int arr[],int s,int mid,int e)
{
    int l=((e-s)+1);
    int ar[l];
    int i=s,j=mid+1;
    int x=0;
    for(;(i<=mid)&&(j<=e);x++)
    {
        if(arr[i]<=arr[j])
        {
            ar[x]=arr[i];
            i++;
        }
        else
        {
            ar[x]=arr[j];
            j++;
        }
    }
    if(i>mid)
    {
        for(;j<=e;x++)
        {
            ar[x]=arr[j];
            j++;
        }
    }
    else
    {
        for(;i<=mid;x++)
        {
            ar[x]=arr[i];
            i++;
        }
    }
    for(int p=0;p<l;p++)
    {
        arr[s]=ar[p];
        s++;
    }
}
void merge(int arr[],int s,int e)
{
    if(e<=s)
    {
        return;
    }
    int mid=(s+e)/2;
    merge(arr,s,mid);
    merge(arr,mid+1,e);
    merge_two(arr,s,mid,e);
}
int main()
{
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<endl;
    merge(arr,0,m);
    for(int i=0;i<m;i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}