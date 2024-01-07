#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int row,col;
void subset_array(int arr[],int size,int *output,int &cunt)
{
    if(size==0)
    {
        *(output+cunt*col+0)=0;
        cunt++;
        return;
    }
    subset_array(arr+1,size-1,output,cunt);
    int temp=cunt;
    *(output+cunt*col+0)=1;
    *(output+cunt*col+1)=arr[0];
    cunt++;
    for(int i=1;i<temp;i++)
    {
        *(output+cunt*col+0)=(*(output+i*col+0))+(*(output+(cunt-i)*col+0));
        *(output+cunt*col+1)=arr[0];
        int k=2;
        for(int j=1;j<=*(output+i*col+0);j++)
        {
            *(output+cunt*col+k)=*(output+i*col+j);
            k++;
        }
        cunt++;
    }
}
int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    row=pow(2,n);
    col=n+1;
    int output[row][col]={{0,0,0,0}};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    subset_array(a,n,(int *)output,count);
    cout<<" "<<endl;
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<=output[i][0];j++)
        {
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}