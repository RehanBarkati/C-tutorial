#include<iostream>
#include<stdexcept>
using namespace std;

int main(){

    try{
        throw runtime_error ("Exception occured");
        //throw 10;
        //throw "Some exception";
        
    }   
    // catch(const char *p){
    //     cout<<p<<endl;
    // } 
    // catch(int a){
    //     cout<<a<<endl;
    // }
    //  catch(runtime_error &b){
    //     cout<<b.what()<<endl;
    // }
    catch(...){
        cout<<"some exception occured"<<endl;
    }
         return 0;
}