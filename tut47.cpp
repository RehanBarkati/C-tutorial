#include<iostream>
#include<cmath>
using namespace std;

/*
create two class:
    1.Simple calculator :- Take input of 2 numbers using a utility function and perform +,-,*,/ and displays the result using another function.
    2. Scientific calculator :- Take input of 2 numbers using a utility function and perform any four scientific operation of your choice and displays the result using another function.

    Create another class HybridCalculator and inherit it using these 2 classes.
    Q1. What type of inheritance are you using--> Multiple inheritance
    Q2. Which mode of inheritance are you using-->Public 
    Q3. Create an object of HYbridCalculator and display results of simple and scientific calculator.
*/

class simpleCalculator{
    private:
    int a,b;
    public:
       void get_data(){
           cout<<"Enter the value of a: "<<endl;
           cin>>a;
           cout<<"Enter the value of b: "<<endl;
           cin>>b;
       }
       void performOperationSimple(){
           cout<<"The sum of a and b is "<<a+b<<endl;
           cout<<"The difference of a and b is "<<a-b<<endl;
           cout<<"The product of a and b is "<<a*b<<endl;
           cout<<"The value of a / b is "<<(float)a/b<<endl;
       }
      

     
};

class scientificCalculator{
    private:
    int a,b;
    public:
       void set_data(){
           cout<<"Enter the value of a: "<<endl;
           cin>>a;
           cout<<"Enter the value of b: "<<endl;
           cin>>b;
       }
       void performOperationScientific(){
           cout<<"The cosine of a is "<<cos(a)<<endl;
           cout<<"The sine of b is "<<sin(b)<<endl;
           cout<<"The value of exp(a) is "<<exp(a)<<endl;
           cout<<"The value of tan(b) is "<<tan(b)<<endl;
       }
        
};

class hybridCalculator: public simpleCalculator,public scientificCalculator{
       
};

int main(){
     hybridCalculator cal;
     cal.get_data();
     cal.performOperationSimple();
     cal.set_data();
     cal.performOperationScientific();
    
     return 0;
}