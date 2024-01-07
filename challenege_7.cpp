#include <bits/stdc++.h>
#include <string>

using namespace std;

string timeConversion(string s) {
    if(s[8]=='P'&&s[0]=='0')
    {
        switch(s[1])
        {
            case '1':s[0]='1';
                     s[1]='3';
                     break;
            case '2':s[0]='1';
                     s[1]='4';
                     break;
            case '3':s[0]='1';
                     s[1]='5';
                     break;
            case '4':s[0]='1';
                     s[1]='6';
                     break;
            case '5':s[0]='1';
                     s[1]='7';
                     break;
            case '6':s[0]='1';
                     s[1]='8';
                     break;
            case '7':s[0]='1';
                     s[1]='9';
                     break;
            case '8':s[0]='2';
                     s[1]='0';
                     break;
            case '9':s[0]='2';
                     s[1]='1';
                     break;
            case '0':s[0]='2';
                     s[1]='2';
                     break;
            default: if(s[0]==1&&s[1]==1)
                     {
                         s[0]='2';
                         s[1]='3';
                     }
                     break;         
        }
    }
    if(s[8]=='A')
    {
        s[0]='0';
        s[1]='0';
    }
    return s;
}

int main()
{
    string time;
    cin>>time;
    string tim=timeConversion(time);
    for(int i=0;i<8;i++)
    {
        cout<<tim[i];
    }
    return 0;
}
