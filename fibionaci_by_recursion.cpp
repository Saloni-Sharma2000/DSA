/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int so1=fib(n-1);
    int so2=fib(n-2);
    return so1+so2;
}
int main()
{
    cout<<fib(6);
    return 0;
}
