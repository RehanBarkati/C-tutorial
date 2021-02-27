#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a=10;
    // cout<<"The value of a was "<<a<<endl;
    //  a=11;
    // cout<<"The value of a is "<<a<<endl;

    //Constant in C++

//    const int a=12; //const is used to fix the value of a
//    cout<<"The value of a was: "<<a<<endl;
//    a=13; //you will get an error
//    cout<<"The value of a is: "<<a<<endl;

//Manipulators in C++

//    int a=1,b=200,c=3123;
//    cout<<"The value of a without setw is: "<<a<<endl;
//    cout<<"The value of b without setw is: "<<b<<endl;
//    cout<<"The value of c without setw is: "<<c<<endl;

//    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl; //setw ensures 4 bit space
//    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
//    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;

 int marks[]={20,30,40};
 int *p=marks;
 cout<<*p<<endl;
 cout<<*(p++)<<endl;
 cout<<*(++p);

    return 0;
}