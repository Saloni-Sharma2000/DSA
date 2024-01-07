/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void selection_sort(int a[],int size){
for(int i=0;i<size-1;i++){
int min=a[i];
int pos=i;
for(int j=i+1;j<size;j++)
{
    if(min>a[j]){
        min=a[j];
        pos=i;
    }
}
a[pos]=a[i];
a[i]=min;
}
}
int main()
{
    int arr[5]={5,4,3,2,1};
    selection_sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}