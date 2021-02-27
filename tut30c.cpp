#include<iostream>
#include<cmath>
using namespace std;

class point{
    friend int result(point p,point q);
    int x,y;
    public:
     point(int a,int b){
            x=a,y=b;
    }
    
};

int result(point p,point q){
    int x1,x2;
    x1= p.x - q.x;
    x2= p.y - q.y;
    return ( x1*x1 + x2*x2);
}



int main(){

    point p(1,2);
    point q(4,5);

    int c=result(p,q);
    float d=sqrt(c);
    cout<<"The distance between p and q is "<<d;
    return 0;
}