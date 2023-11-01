#include<iostream>
#include<vector>
using namespace std;

void ReverseString(string &s, int st,int e){
    if (st>=e)
    {
        return;
    }
    
    swap(s[st],s[e]);
    //Recursive call;
    ReverseString(s,st+1,e-1);
}


int main(){

string s;
cout<<"Enter your string : ";
cin>>s;

int st = 0;
int e = s.size()-1;
ReverseString(s,st,e);

cout<<s<<endl;
    
    return 0;
}
