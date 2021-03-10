#include<iostream>
#include<string>
using namespace std;

int countValleys(int p,string s){
    int a=0,b=0;
    for(int i=0;i<p;i++){
        if(s[i]=='U'){
            a++;
        }
        else{
            a--;
        }
        if(a==0 && s[i]=='U'){
            b++;
        }
    }
    return b;
}

int main(){
    int  p;
    cin>>p;
    string s;
    cin>>s;
   
    cout<< countValleys(p, s);
    
    return 0;
}
