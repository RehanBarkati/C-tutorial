#include<iostream>
#include<stdexcept>
using namespace std;

void test() throw(int,char,runtime_error){
    throw runtime_error("error");
}
int main(){
   try{
       test();
   }  
   catch(int a){
       cout<<"Integer type "<<a<<endl;
   }
   catch(char c){
       cout<<"Character type "<<c<<endl;
   }
   catch(runtime_error r){
       cout<<"runtime error "<<r.what()<<endl;
   }
     return 0;
}