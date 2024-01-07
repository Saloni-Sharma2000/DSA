#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int p=0,j=0;
    int se=arr[s];
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=se)
        {
            j++;
        }
    }
    //cout<<"Count "<<j<<endl;
    arr[s]=arr[j+s];
    arr[j+s]=se;
    p=j+s;
    j=p+1;

    int i=s;
    while(i<p && j<=e)
    {
        if(arr[p]<=arr[i])
        {
            if(arr[j]>arr[p])
            {
                j++;
            }
            else{
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                i++;
                j++;
            }
        }
        else{
            i++;
        }

    }
    return p;
}
void quick_sort(int arr[],int s, int e)
{
    if(e<=s){
        return ;
    }
    int p=partition(arr,s,e);
    //cout<<endl;
    //cout<<p;
    //cout<<endl;
    //cout<<arr[p];
    //cout<<endl;
    //for(int i=0;i<=e;i++)
   //{
    //    cout<<arr[i]<<" ";
    //}
    //cout<<endl;
    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}