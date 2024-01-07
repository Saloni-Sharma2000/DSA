#include<iostream>
using namespace std;
string pair_s(string w){
    if(w.length()==1)
    {
        return w;
    }
    string ns=pair_s(w.substr(0+1,w.length()));
    //cout<<"1 "<<w<<" "<<ns<<endl;
    if(ns[0]==w[0])
    {
        w=w[0]+("*"+ns);
        //cout<<w<<endl;
        return w;
    }
    ns=w[0]+ns;
    //cout<<ns<<endl;
    return ns;
}
int main(){
    string word;
    cin>>word;
    cout<<pair_s(word);
    return 0;
}