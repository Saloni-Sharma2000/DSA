#include <iostream>
#include<vector>

using namespace std;
int all_index(int arr[],int size,int info,int v2[])
{
    //cout<<add<<endl;
    //cout<<arr[0]<<endl;
    if(size==0)
    {
        return 0;
    }
    int output=all_index((arr+1),(size-1),info,v2);
    //cout<<" "<<sm<<" ";
    for(int i=0;i<output;i++)
    {
        v2[i]++;
    }
    if(arr[0]==info)
    {
        //cout<<v2.size();
        for(int i=output;i>0;i--)
        {
            //cout<<endl<<"*"<<i<<endl;
            v2[i]=v2[i-1];
        }
        v2[0]=0;
        output++;
    }
    return (output);
   // return sm;
}
int main()
{
    int n,info;
    cin>>n;
    int arr[n];
    int v1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>info;
    int len= all_index(arr,n,info,v1);
    cout<<"\n"<<len<<endl;

    for(int i=0;i<len;i++)
    {
        cout<<++v1[i]<<" ";
    }
    return 0;
}
