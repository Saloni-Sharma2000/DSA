#include <iostream>
using namespace std;

void is_search(int *ptr,int size,int num){
    if(size==0)
    {
        cout<<"\nNumber Not Found.";
        return;
    }
    if(*ptr==num)
    {
        cout<<"\nNumber Found.";
        return;
    }
    is_search(ptr+1,size-1,num);
}
int main() {
    int size;
    cin>>size;
    int arr[size];
    int num;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cin>>num;
    is_search(arr,size,num);
    return 0;
}