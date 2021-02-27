#include<iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
/*
class derived : visibility-mode base 1 , visibility-mode base 2, ......
{
     class body
};
*/

class base1{
     protected:
         int base1int;
     public:
        void set_base1int(int a){
            base1int=a;
        }    
};
class base2{
     protected:
         int base2int;
     public:
        void set_base2int(int a){
            base2int=a;
        }    
};

class derived : public base1,public base2{
    public: 
      void show(){
          cout<<"The value of base1int is "<<base1int<<endl;
          cout<<"The value of base2int is "<<base2int<<endl;
          cout<<"The sum is "<<base1int+base2int<<endl;
      }
};

/*
   Derived inherit class will look like :
    data member
      base1int--> protected
       base2int--> protected
    member function
          void set_base1int-->public
          void set_base2int-->pub
          
*/

int main(){
    derived d;
    d.set_base1int(10);
    d.set_base2int(20);
    d.show();
    
     return 0;
}