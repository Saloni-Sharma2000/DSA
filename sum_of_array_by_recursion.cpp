/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int sum_array(int a[],int size)
{
    if(size==0)
    {
        return a[size];
    }
    int sum=0;
    sum+=a[size]+sum_array(a,size-1);
    return sum;
}

int main()
{
    int arr[]={2,3,4,15,6};
    cout<<"\nSum Is:- "<<sum_array(arr,5);

    return 0;
}
