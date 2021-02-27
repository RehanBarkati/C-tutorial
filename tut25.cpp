#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
      void setId(){
          cout<<"Enter the id of employee"<<endl;
          cin>>id;
      }
      void getId(){
          cout<<"The Id of this employee is "<< id<<endl;
      }
};

int main(){
    // employee harry,rehan,danish,faizan;
    // harry.setId();
    // harry.getId();
    employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
        
    }
    return 0;
}