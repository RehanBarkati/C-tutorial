#include<iostream>
using namespace std;

class student{
    protected:
      int roll_number;
    public:
      void set_roll_number(int); 
      void get_roll_number(void); 
};

void student :: set_roll_number(int r){
    roll_number=r;
}
void student :: get_roll_number(){
    cout<<"The roll number is  " <<roll_number<<endl;
}

class exam : public student{
    protected:
      float maths;
       float physics;
    public:
      void set_marks(float,float);
      void get_marks();  
};

void exam ::set_marks(float m1,float m2){
    maths=m1;
    physics=m2; 
}
void exam ::get_marks(){
    cout<<" The marks obtained in maths are "<<maths<<endl;
     cout<<" The marks obtained in physics are "<<physics<<endl; 
}
class result : public exam{
    float percentage;
    public:
     void display_result(){
         get_roll_number();
         get_marks();
         cout<<"Your percentage is "<<(maths+physics)/2<<endl;
     }

};
int main(){

   /*
     Notes:
       If we are inheriting C from B and B from A
      1. A is base class for B and B is base class for C.
      2.A-->B-->C is called inheritance path.   
   */
    result rehan;
    rehan.set_roll_number(200);
    rehan.set_marks(98,99);
    rehan.display_result();

     return 0;
}