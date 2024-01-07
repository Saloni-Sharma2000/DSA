#include<iostream>
#include<cmath>
using namespace std;
int col=2;
int row=2;
void print(int *a)
{
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<*(a+i*col+j)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    row=pow(2,n);
    col=n+2;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<(n+2);j++)
        {
            cin>>arr[i][j];
        }
    }
    //cout<<row<<" "<<col;
    print((int *)arr);
    return 0;
}