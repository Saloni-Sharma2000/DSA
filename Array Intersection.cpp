#include<iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> Max_Feq(int a[],int b[],int size1,int size2)
{
    vector<int>output1;
    unordered_map<int,int> m;
    for(int i=0;i<size2;i++)
    {
        if(m.count(b[i])>0)
        {
            m.at(b[i])++;
            continue;
        }
        m[b[i]]=1;
    }
    for(int i=0;i<size1;i++)
    {
        if(m.count(a[i])>0)
        {
            if(m.at(a[i])>0)
            {
                m.at(a[i])--;
                output1.push_back(a[i]);
            }
        }
    }
    return output1;
}
int main()
{
    int testCase,size1,size2;
    //cin>>testCase;
    cin>>size1;
    int arr1[size1];
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++)
    {
        cin>>arr2[i];
    }
    vector<int> temp=Max_Feq(arr1,arr2,size1,size2);
    sort(temp.begin(), temp.end());
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}