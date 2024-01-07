#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int sortedSubsegments(long k, vector<long> a, vector<long> queries) {
    for(int i=0;i<(queries.size()/2);i++)
    {
         sort(&a[queries.at(i)], &a[queries.at(i+1)+1]);
         i+=1;
    }
    return a[k];
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
    cout<<sortedSubsegments(mn[2],arr,q);
    return 0;
}