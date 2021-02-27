#include<iostream>
using namespace std;

/*
  student-->test
  student-->sport
  test+sport-->result
  */

class student{
    protected:
       int roll_no;
    public:
        void set_number(int a){
            roll_no=a;
        }   
       void print_number(){
           cout<<"Your roll number is "<<roll_no<<endl;
       }
};

class test: virtual public student{
        protected:
          float maths,physics;
        public:
           void set_marks(float m1,float m2){
               maths=m1;
               physics=m2;
           }  
           void print_marks(){
               cout<< "Your result is here : "<<endl
                    <<" Maths : "<<maths<<endl
                    <<"Physics: "<<physics<<endl;
           }  
};

class sports:public virtual student{
       protected:
         float score;
       public:
          void set_score(float sc){
              score=sc;
          } 
          void print_score(){
              cout<<"Your PT score is : "<<score<<endl;
          } 
};

class result: public sports ,public test{
    private:
      float total;
     public:
       void display(){
           total= maths+physics+score;
           print_number();
           print_marks();
           print_score();
           cout<<"Your total score is "<<total<<endl;

       } 
}; 

int main(){
     result rehan;
     rehan.set_number(1200822);
     rehan.set_marks(99,92);
     rehan.set_score(72);
     rehan.display();
     return 0;
}