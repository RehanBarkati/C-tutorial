#include<iostream>
#include<exception>
using namespace std;

class Overspeed :public exception{
    int speed;
    public:
    const char* what(){;
    return "Check out your car speed \n You are in the car not in the aeroplane\n";
    }
    void getSpeed(){
         cout<<"Your car speed is "<<speed<<endl;
    }
    void setSpeed(int speed){
        this->speed=speed;
    }
};
class Car{
   int speed;
    public:
    Car(){
        speed=0;
        cout<<"Speed is zero"<<endl;
    }
    void accelerate(){
       for(;;){
           speed+=10;
           cout<<"Speed is "<<speed<<endl;
           if(speed>=250){
               Overspeed s;
               s.setSpeed(speed);
               throw s;
           }
       }
    }
};

int main(){
     
     Car bugati;
     try{
         bugati.accelerate();
     }
     catch(Overspeed s){
       cout<<s.what()<<endl;
       s.getSpeed();
     }
     return 0;
}