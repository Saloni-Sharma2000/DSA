#include<iostream>
using namespace std;
void print_subset(int arr[],int n,int output[],int len)
{
    if(n==0)
    {
        for(int i=0;i<len;i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int l=len+1;
    int *p=new int[l]; 
    for(int i=0;i<len;i++)
    {
        p[i]=output[i];
    }
    p[len]=arr[0]; 
    print_subset(arr+1,n-1,p,l);
    print_subset(arr+1,n-1,output,len);

}
int main(){
    int n;
    cin>>n;
    int arr[n],len=0;
    int *ptr=new int[len];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" "<<endl;
    print_subset(arr,n,ptr,len);
    return 0;
}