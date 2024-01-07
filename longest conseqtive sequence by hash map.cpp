#include<iostream>
#include<map>
using namespace std;
int main()
{
    int size,len,start_place;
    cin>>size;
    int a[size];
    map<int,bool> m;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
        if(m.count(a[i])>0)
        {
            continue;
        }
        else{
            m[a[i]]=true;
        }
    }
    int start,max=0;
    for(int i=0;i<size;i++)
    {
        int frontFace=0;
        int search=a[i];
        int tempMax=0;
        while((frontFace>=0 && frontFace<=1))
        {
            if(m.count(search)>0 && m[search]==true)
            {
                tempMax++;
                m[search]=false;
                if(frontFace==0)
                {
                    search++;
                }
                else{
                    search--;
                }
                // tempStart=search++;
            }
            else{
                if(frontFace==1)
                {
                    frontFace=2;
                    if(max<=tempMax)
                    {
                        cout<<"Temp Max "<<tempMax<<endl;
                        cout<<"Temp Start "<<start<<endl;
                        max=tempMax;
                        start=++search;
                    }
                }
                else{
                frontFace=1;
                search=a[i]-1;
                }

            }
        }
        // if(m.count(a[i])>0)
        // {
        //     continue;
        // }
        // else{
        //     m[s[i]]=true;
        // }
    }
    cout<<start<<" "<<start+max-1;
    
    return 0;
}