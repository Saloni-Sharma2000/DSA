#include<iostream>
#include<map>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    map<int,int> m;
    int longestSubsetToZero=0,longestSubsetToZeroSize=0;
    for(int i=0;i<size;i++)
    {
        if(m.count(longestSubsetToZero+a[i])==0)
        {
            m[longestSubsetToZero+a[i]]=i;
            longestSubsetToZero=longestSubsetToZero+a[i];
        }
        else{
            if(i-m[longestSubsetToZero+a[i]]>longestSubsetToZeroSize)
            {
                longestSubsetToZeroSize=i-m[longestSubsetToZero+a[i]];
                longestSubsetToZero=longestSubsetToZero+a[i];
            }
        }
    }
    cout<<"Longest Subset Size Is:- "<<longestSubsetToZeroSize;
    return 0;
}