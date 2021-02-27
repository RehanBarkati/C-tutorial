#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
      void setValue(int value){
          data=value;
      }
      friend void add(X o1,Y o2);
};
class Y{
    int num;
    public:
    void setValue(int value){
        num=value;
    }
     friend void add(X o1,Y o2);

};
void add( X o1,Y o2 ){
    cout<<" summing datas of X and Y objects give me "<<(o1.data + o2.num);
}

int main(){
    X a;
    a.setValue(2);
    Y b;
    b.setValue(4);
    add(a,b);
    
    return 0;
}