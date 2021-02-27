#include <iostream>
using namespace std;

//Base class
class employee
{
    // int id;

public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    employee(){};
};

//derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    // class member/methods/etc......
}

Notes:
1.Default visibility mode is private.
2.Private visibility mode: Public members of base class becomes private member of derived class.
3.Public visibility mode: Public members of base class becomes public member of derived class.
4. Private members are never inherited.
*/

//Creating a programmer class derived from employee base class

class programmer : employee
{
public:
    programmer(int inpId)
    {
        id = inpId;
    }
    int languagecode = 9;
    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{
    employee rehan(1), subhan(2);
    cout << rehan.salary << endl;
    cout << subhan.salary << endl;
    programmer skillf(10);
    cout << skillf.languagecode<<endl;
    skillf.getdata();

    return 0;
}