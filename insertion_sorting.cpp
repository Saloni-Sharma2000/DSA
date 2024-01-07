/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void insertion_sort(int a[],int size)
{
    for(int i=1;i<size;i++)
    {
        int current=a[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(current<a[j])
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=current;
    }
    
}

int main()
{
    int a[]={5,10,1,8,4};
    insertion_sort(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}