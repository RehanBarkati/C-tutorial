#include<iostream>
using namespace std;


class c2;
class c1{
    int val1;
    public:
    void inData(int a){
        val1=a;
    }
      void display(){
          cout<< val1 <<endl;
      }
      friend void exchange(c1 & ,c2 &);
};
class c2{
    int val2;
    public:
    void inData(int a){
        val2=a;
    }
      void display(){
          cout<<val2<<endl;
      }
      friend void exchange(c1 &,c2 &);
};
void exchange(c1 &x, c2 &y){
    int temp;
    temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main(){
    c1 p;
    c2 q;
    p.inData(20);
    q.inData(10);
    exchange(p,q);

    cout<<"The value of p  after exchanging is " ;
     p.display(); 
      cout<<"The value of q after exchanging is " ;
     q.display(); 

    
    return 0;
}