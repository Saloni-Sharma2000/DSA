#include<iostream>
using namespace std;
int binary_search(int arr[],int start,int size,int num)
{
    if(start>=size)
    {
        return -1;
    }
    int mid=(start+size)/2;
    if(arr[mid]==num)
    {
        return mid+1;
    }
    else if(arr[mid]>num)
    {
        return binary_search(arr,start,mid,num);
    }
    else{
        return binary_search(arr,mid+1,size,num);
    }
}
int main()
{
    int n,num;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>num;
    cout<<binary_search(a,0,n,num);
    return 0;
}