#include <iostream>
#include<string.h>

using namespace std;


string timeConversion(string s) {
   string p;
   p=s.substr(0,8);
   
   if(s[8]=='A' ){
       if(s[0]=='1' && s[1]=='2'){
           p[0]='0';
           p[1]='0';
       }
       else{
           p=p;
       }
   }
   else {
      
       if(s[0]=='1' && s[1]=='2'){
           p=p;
       }
       else{
          //int temp=stoi(p[0]);
           int temp=(int)p[0];
            temp=temp+1;
            char temp1=temp;
            p[0]=temp1;
           
         int temp2=(int)p[1];
            temp2=temp2+2;
            char temp3=temp2;
            p[1]='temp3';
       }   
   }
     
    return p;
}

int main()
{
    string s;
    cin>>s;

    string result = timeConversion(s);
    cout<<result;

    return 0;
}
