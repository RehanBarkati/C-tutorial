#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    // string p=s.substr(s.size()-3);//copy the last 3 char of s.
    // string p=s.substr(0,3);
    cout<<s.substr(s.size()-3);
   // cout<<p;
     return 0;
}