 //OOPS- Classes and objects
    //C++ -->initially called C with classes by Strousstroup
    //Class-->extension of structures
    /*structures had limitation
         -members are public
         -functions cannot be created */
    // classes= structurs + more
    //classes --> can make few members as private and few as public
    //structures in C++ are typedefed
    //you can declare objects along with class declaration like this:
    /*  class employee{
          // class definition
       } harry,rehan,faizan;*/
    //harry.salary=8 makes no sense if salary is private.

    //Nesting of member function

#include <iostream>
#include <string>
using namespace std;

class binary
{
   string s;//by default it is private unless not make public'
  void chk_bin();

public:
    void read();
   // void chk_bin();
    void onesComplement();
    void display();
};

void binary :: read(){

    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: onesComplement(){
     chk_bin();
     for(int i=0;i<s.length();i++){
         if(s.at(i)=='0'){
             s.at(i)='1';
         }
        else if(s.at(i)=='1'){
             s.at(i)='0';
         }
     }
}

void binary :: display(){
    cout<<"Displaying your binary number"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
   
   
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.onesComplement();
    b.display();
    return 0;
}