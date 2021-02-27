#include<iostream>
using namespace std;

class simple{
    int data1,data2;
    public:
    simple(){};
     simple(int a,int b=10){
         data1=a;
         data2=b;
     }
       void printData();
};

void simple ::printData(){
    cout<<"The value of data is "<<data1<<" and "<< data2<<endl;
}

int main(){
    simple s;
     s=simple(1);
    s.printData();
    
    return 0;
}