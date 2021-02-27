#include<iostream>
using namespace std;

class A{
     int a;
     public:
    //    A &setdata(int a){
    //           this-> a=a;
    //           return *this;
    //    }
    void setdata(int a){
        this->a=a;
    }
       void getdata(){
           cout<<"The value of a is "<<a<<endl;
       }
};

int main(){
    // 'this' is keyword which is a pointer which points to object which invokes the member function.
    A a;
  //  a.setdata(4).getdata();
  a.setdata(4);
    a.getdata();
     return 0;
}