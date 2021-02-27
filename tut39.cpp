#include<iostream>
using namespace std;

class base{
    protected:
        int a;
    private:    
        int b;
};
/*
For a protected member:
                           Public derivation    Private derivation    Protected derivation
   1.Private members        Not inherited       Not inherited          Not inherited
   2.Protected members      Protected           Private                  Protected  
   3.Public members          Public               Private                 Protected 
   */
class derived : protected base{
     
};

int main(){
      base b;
      derived d;
      //cout<<d.a;   will not work as it is protected in derived as well as base class.
     return 0;
}