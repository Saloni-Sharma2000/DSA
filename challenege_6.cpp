#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
using namespace std;
/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> p) {
    vector<int> temp{0,0,0};
    for(int i=0;i<p.size();i++)
    {
        if(p.at(i)==0)
        {
            temp[2]+=1;
        }
        else if(p.at(i)-(abs(p.at(i))==0))
        {
            temp[1]+=1;
        }
        else
        {
            temp[0]+=1;
        }
    }
    cout<<temp[0]<<endl;
    cout<<temp[1]<<endl;
    cout<<temp[2]<<endl;
    //cout<<((float)temp[0]/(p.size()))<<endl;
    //cout<<((float)temp[1]/(p.size()))<<endl;
    //cout<<((float)temp[2]/(p.size()));
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    int dat;
    for(int i=0;i<n;i++)
    {
        cin>>dat;
        arr.push_back(dat);
    }
    plusMinus(arr);
    //cout<<5.000000/2;
    return 0;
}


