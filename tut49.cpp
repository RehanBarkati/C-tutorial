#include<iostream>
using namespace std;

/*
Syntax for initialisation list in constructor:
  constructor(arguement-list) : initialisation section{
      assignment + other code;
  }   

  class test{
      int a,b;
      public:
        test(int i,int j): a(i),b(j){constructor-body}
  };
*/
class test{
      int a;
      int b;
      public:
       // test(int i,int j): a(i),b(j){
         //  test(int i,int j): a(i),b(i+j){
        //  test(int i,int j): b(j),a(i+b){ //-->This will create problem because a will be initilised first
         //  test(int i,int j): b(j),a(i+b){
             test(int i,int j):a(i){
                b=j; 
            cout<<"Constructor executed"<<endl;
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b;            }
  };

int main(){
    test t(3,4);

     return 0;
}