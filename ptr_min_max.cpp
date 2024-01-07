/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Size:- ";
    cin>>n;
    int arry[n],*ptr=arry;
    cout<<"\nEnter Element:- ";
    int i=0;
    while(i<n){
        cin>>i[ptr];
        i++;
    }
    i=1;
    int *max=ptr,*min=ptr;
    cout<<"Output:- ";
    while(i<n){
        if((*max)<i[ptr])
        {
            max=(ptr+i);
        }
        if((*min)>i[ptr]){
            min=(ptr+i);
        }
        i++;
    }
    cout<<"\nMax :-"<<*max<<endl;
    cout<<"Min :-"<<*min;
    return 0;
}