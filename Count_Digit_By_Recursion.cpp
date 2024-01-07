#include <iostream>

using namespace std;
int count=0;
void count_digit(int n)
{
    if(n==0)
    {
        count=0;
        return;
    }
    count_digit(n/10);
    count++;
}
int main()
{
    count_digit(5555);
    cout<<count;
    return 0;
}
