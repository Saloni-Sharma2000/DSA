#include<iostream>
using namespace std;
void tower_of_hanoi(int n,char a,char b,char c){
    if(n==1)
    {
        cout<<a<<"-"<<c<<"\n";
        return;
    }
    tower_of_hanoi(n-1,a,c,b);
    cout<<a<<"-"<<c<<"\n";
    tower_of_hanoi(n-1,b,a,c);
}
int main()
{
    int number;
    cin>>number;
    tower_of_hanoi(number,'a','b','c');
    return 0;
}