#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;

/* Derived classe from exception base class :
1.bad_alloc  2.bad_cast  3.bad_typeid 4.bad_exception 5.logic_error 6.runtime_error
    -> logic_error have different types :-
       -domain_error   -invalid_arguement  -length_error -out_of_range_error
    -> runtime_error has the following types :-
       -overflow_error  -underflow_error   -range_error   

*/
int main(){
    int a=10,b=0;
     int c;
     try{
         if(b==0)
           throw runtime_error("Divide by zero error");
          c=a/b;
         cout<<c<<endl;
      }
         catch(runtime_error &e){
             
          cout<<"Exception occurred "<<endl;
          cout<<e.what();
     }
     return 0;
}