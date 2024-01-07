/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void is_sorted(int a[],int size)
{
    if(size==0||size==1)
    {
        cout<<"\nSorted.";
        return;
    }
    if(a[0]>a[1])
    {
        cout<<"\nunsorted";
        return;
    }
    is_sorted(a+1,size-1);
}

int main()
{
    int arr[]={2,3,4,15,6};
    is_sorted(arr,5);

    return 0;
}
