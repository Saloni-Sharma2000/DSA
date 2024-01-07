/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void print_number_to_n(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }
    print_number_to_n(n-1);
    cout<<n<<" ";
    return;
}
int main()
{
    print_number_to_n(10);

    return 0;
}
