#include<iostream>
using namespace std;

template<class T1=int,class T2=float>
class rehan{
    public:
    T1 a;
    T2 b;
    rehan(T1 x,T2 y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
         cout<<"the value of b is "<<b<<endl;
    }
};
int main(){
    rehan<int, int> r(4,6);
    r.display();
    
     return 0;
}