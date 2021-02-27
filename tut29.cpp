#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    //Creating a constructor
    //Constructor is a special member function with same name as of the class.
    //It is used to initialize the object of its class.
    //It is automatically invoked ehenever an object is created.
    complex(); //constructor declaration  (not necessary to define return type).
};

complex ::complex() //This is a default constructor as it takes no parameter.
{
    a = 10, b = 12;
}

int main()
{
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

/*  Characteristics of constructor
 1.It should be declared in public section of class.
 2.They are automatically invoked whenever object is created.
 3.They cannot return value and do not have return types.
 4.It can have default arguements.
 5. We cannot refer to their address.
 */