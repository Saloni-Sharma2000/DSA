#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int pairTosumZero(int arr[],int size)
{
    unordered_map<int,int> m;
    int sum=0,largest=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        if(m.count(sum)==0)
        {
            m[sum]=1;
        }
        else
        {
            m[sum]++;
        }
        if(m[sum]>largest)
        {
            largest=m[sum];
        }
    }
    return largest;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<pairTosumZero(arr,size);
    return 0;
}