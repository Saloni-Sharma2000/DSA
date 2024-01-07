#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void merge(vector<long> *ar,long m,long mid,long n)
{
    //cout<<m<<" "<<n<<endl;
    //cout<<mid<<endl;
    int i=m;
    int j=mid+1;
    int k=m;
    vector<long> sa;
    while(i<=mid && j<=n)
    {
        if((*ar)[i]<=(*ar)[j])
        {
            sa.push_back((*ar)[i]);
            i++;
        }
        else {
            sa.push_back((*ar)[j]);
            j++;
        }
    }
    if(i>mid)
    {
        while(j<=n)
        {
            sa.push_back((*ar)[j]);
            j++;
        }
    }
    else {
        while(i<=mid)
        {
            sa.push_back((*ar)[i]);
            i++;
        }
    }
    int p=0;
    //cout<<sa.size()<<" ";
    for(k=m;k<=n;k++)
    {
        (*ar)[k]=sa.at(p);
        p++;
    }
}
void merge_sort(long m,long n,vector<long>*ar)
{
    //cout<<m<<" "<<n<<endl;
    //cout<<ar<<endl;
    if(m>=n)
    {
        return;
    }
    long mid = (m+n)/2;
    //cout<<mid<<endl;
    merge_sort(m, mid,ar);
    merge_sort(mid + 1,n,ar);
    merge(ar, m, mid, n);
    //for(int i=0;i<n;i++)
    //{
    //    cout<<(*ar)[i]<<" ";
    //}
}
int sortedSubsegments(long k, vector<long> a, vector<long> queries) {
    for(int i=0;i<(queries.size());i++)
    {
        //cout<<queries.at(i)<<" "<<queries.at(i+1)<<endl;
        merge_sort(queries.at(i), (queries.at(i+1)),&a);
         i+=1;
    }
    return a[k];
    //cout<<&a<<endl;
    //for(int i=0;i<a.size();i++)
    //{
    //    cout<<a[i]<<" ";
    //}
}
int main()
{
    long dat;
    vector<long> mn;
    for(int i=0;i<3;i++)
    {
        cin>>dat;
        mn.push_back(dat);
    }
    vector<long> arr;
    for(int i=0;i<mn.at(0);i++)
    {
        cin>>dat;
        arr.push_back(dat);
    }
    vector<long> q;
    for(int i=0;i<(mn.at(1)*2);i++)
    {
        cin>>dat;
        q.push_back(dat);
    }
    //sortedSubsegments(mn[2],arr,q);
    //cout<<&arr<<endl;
    cout<<"\n"<<sortedSubsegments(mn[2],arr,q);
    return 0;
}
