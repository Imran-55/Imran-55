#include<iostream>
using namespace std;

void OccurString(string s, char c, int &ans, int i,int e){

    //base case
    if(i>=e){
        return;
    }
    //solve one case
    if(s[i] == c){
        ans = i;
    }
    // recursive call
    OccurString(s,c,ans,i+1,e);
}

int main(){

    string s;
    cout<<"Enter string : ";
    cin>>s;
    int e = s.size();
    int i = 0;

    char c ;
    cout<<"Enter a char : ";
    cin >> c;

    int ans = -1; 
    OccurString(s,c,ans,i,e);
    cout<<ans;

    return 0;
}
