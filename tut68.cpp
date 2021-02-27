#include<iostream>
using namespace std;

template<class T>
class rehan{
    public:
    T data;
    rehan(T a){
        data = a;
    }
    void display();
};

template<class T>
void rehan<T> :: display(){
        cout<<data;
    }
void func(int a){
    cout<<"I am first func() "<<a<<endl;
} 
template<class T> 
void func(T a){
    cout<<"I am templated func() "<<a<<endl;
}    
int main(){
    
 rehan <float> r(5.4);
 cout<<r.data<<endl;
// r.display();
//func(4);// Exact match takes the highest priority.


     return 0;
}