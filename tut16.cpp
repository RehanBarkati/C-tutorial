#include<iostream>
using namespace std;

void swapreference(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=3,y=4;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapreference(x,y);
     //swapreference(x,y)=300;
     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}