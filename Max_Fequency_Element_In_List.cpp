#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int Max_Feq(int a[],int size)
{
    vector<int>output;
    unordered_map<int,int> m;
    for(int i=0;i<size;i++)
    {
        if(m.count(a[i])==0)
        {
            m[a[i]]=1;
            output.push_back(a[i]);
            continue;
        }
        m[a[i]]=m.at(a[i])+1;
    }
    int max=m[output[0]],max_ele=output[0];
    for(int i=1;i<output.size();i++)
    {
        if(max<m[output[i]])
        {
            max=m[output[i]];
            max_ele=output[i];
        }
    }
    return max_ele;
}
int main()
{
    int a[]={1, 4, 5};
    cout<<Max_Feq(a,3);
    return 0;
}