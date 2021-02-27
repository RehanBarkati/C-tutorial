#include<iostream>
using namespace std;

class point{
    int x,y;
    public:
    point(int a, int b){
          x=a;
          y=b;
    }
    void display(){
        cout<<"The point is ("<< x<<" , "<<y<<" )"<<endl;
    }

};

int main(){
            point p(1,1);
            point q(2,3);
            p.display();
            q.display();                 
    return 0;
}
//create a function(Make it a friend function) which take two point objects and compute distance between those point.



