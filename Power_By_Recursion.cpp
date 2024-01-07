/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int power_num(int num, int power=1)
{
    if(power==0)
    {
        return 1;
    }
    int smalloutput=power_num(num,power-1);
    int ouput=num*smalloutput;
    return ouput;
}
int main()
{
    cout<<power_num(81);

    return 0;
}
