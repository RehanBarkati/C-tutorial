#include<iostream>
using namespace std;

class complex{
       int a,b;
       public:
       void setNumber(int n1, int n2){
           a=n1, b=n2;
       }
     // below line means that sumcomplex is aloowed to excess private data of this class.
       friend complex sumComplex(complex a1,complex a2);//it does not mean that it becomes a member function of this class.
       void printNumber(){
           cout<<"Your number is "<<a << "+ "<<b<<"i"<<endl;
       }
};

complex sumComplex(complex o1,complex o2){
    complex o3;
    o3.setNumber( o1.a + o2.a, o1.b +o2.b);
    return o3;
}

int main(){
    complex c1,c2,c;
    c1.setNumber(1,4);
    c2.setNumber(5,6);

    c1.printNumber();
    c2.printNumber();

    c=sumComplex(c1,c2);
    c.printNumber();
  
    
    return 0;
}

/* properties of friend function :

 1. Not in the scope of class.
 2.Since it is not in the scope of class,it cannot be called from the object of that class. c1.sumComplex===invalid.
 3.can be invoked without the help of any object.
 4.usually contains the objexts as arguement.
 5.can be declared inside public or private section of class.
 6.It cannot access the member directly by their names and need object _name.member_name to access any member.
 */