#include<iostream>
using namespace std;

/*
   Case 1:
 class B: public A{
      Order of execution of constructor -->first A() then B().
 };

 Case 2:
  class A:public B,public C{
      Order of execution of constructor--> First B() then C() and then A().
  };\

  Case 3:
   class A: public B,virtuall public C{
       Order of execution of constructor --> First C() then B() and then A().
   };
*/

class base1{
    int data1;
    public:
      base1(int i){
          data1=i;
          cout<<"Base1 class constructor is called"<<endl;
      }
      void printdata1(){
          cout<<"The value of data1 is "<<data1<<endl;
      }
};
class base2{
    int data2;
    public:
      base2(int i){
          data2=i;
          cout<<"Base2 class constructor is called"<<endl;
      }
      void printdata2(){
          cout<<"The value of data2 is "<<data2<<endl;
      }
};

class derived : public base1,public base2{
    int derived1,derived2;
    public:
      derived(int a,int b,int c,int d):base2(c),base1(a){   //Here the order doesnot matter.
          derived1=c;
          derived2=d;
          cout<<"Derived class constructor is called"<<endl;
      }
      void printdataDerived(){
          cout<<"The value of derived1 and derived2 is "<< derived1 <<" "<< derived2<<endl;
      }

};

int main(){
    derived rehan(1,2,3,4);
    rehan.printdata1();
    rehan.printdata2();
    rehan.printdataDerived();
     return 0;
}