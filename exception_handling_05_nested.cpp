#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
     try{
         try{
             throw "a character type";
         }
         catch(const char *p){
             cout<<"Character type in inner block "<<p<<endl;
             cout<<"rethrowing to outer block"<<endl;
             throw;
         }
     }
     
     catch(const char *p){
         cout<<"Character type in outer block "<<p<<endl;
     }

     return 0;
}