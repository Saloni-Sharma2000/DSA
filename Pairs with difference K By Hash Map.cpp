#include <iostream>
#include<map>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(m.count(a[i])>0)
        {
            m[a[i]]=++m[a[i]];
        }
        else
        {
            m[a[i]]=1;
        }
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(k==0)
        {
            if(m[a[i]]>0 && m[a[i]]>1)
            {
                count+=m[a[i]]-1;
                m[a[i]]--;
            }
        }
        else{
            if(m.count(a[i]+k) && m[a[i]]!=0)
            {
                count=count+(m[a[i]]*m[a[i]+k]);
            }
            if(m.count(a[i]-k) && m[a[i]]!=0)
            {
                count=count+(m[a[i]]*m[a[i]-k]);
            }
            m[a[i]]=0;
        }
    }
    
    cout<<count;
    return 0;
}
