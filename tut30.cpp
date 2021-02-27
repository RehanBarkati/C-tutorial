#include<iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    
    complex(int x, int y); //constructor declaration  
};
complex ::complex(int x, int y)// -->This is parametrized constructor as it takes two parameter.  
{
    a =x, b =y;
}

int main(){
    //implicit call
    complex c(2,4);

    //explicit call
    complex b = complex(3,7); 
    c.printNumber();
         b.printNumber();
    
    return 0;
}