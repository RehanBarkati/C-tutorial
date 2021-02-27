#include<iostream>
using namespace std;

class baseclass{
     public:
     int var_base;
     void display(){
         cout<<"Displaying base class variable var1 "<<var_base<<endl;
     }
};
class derivedclass: public baseclass{
   public:
     int var_derived;
     void display(){
         cout<<"Displaying base class variable var1 "<<var_base<<endl;
         cout<<"Displaying base class variable var1 "<<var_derived<<endl;
     }
};
int main(){
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer= &obj_derived;
    base_class_pointer->var_base=34;
    //base_class_pointer->var_derived=134;  it will throw error as no var-derived variable exist in base class.
    base_class_pointer->display();

    derivedclass* derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base=100;
    derived_class_pointer->var_derived=50;
    derived_class_pointer->display();


     return 0;
     }