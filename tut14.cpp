#include<iostream>
using namespace std;

union money{ // only one of these value can be alloted at at a time 
    int rice;//4
    char car;//1
    float pounds;//4
};

int main(){
//     union money m1;
//     m1.rice=40;
//    m1.car='c';
//     //cout<<m1.rice;//it will return garbage value
//     cout<<m1.car;//it will print c

enum meal{breakfast,lunch,dinner};
meal m1=breakfast;
cout<<m1<<endl;
// cout<<breakfast;
// cout<<lunch;
// cout<<dinner;

    return 0;
}