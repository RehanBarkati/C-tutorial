#include<iostream>
using namespace std;

//don't use inline with loop,and statics.Inline makes the programme run faster

inline int product(int a, int b){
    //static int c=0;//this executes only ones
   // c+=1;//next time when the function is run,the value of c is retained
    return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04 ){
    return currentMoney*factor;
}

int main(){
    // int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;

//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;
//    cout<<"The product of a and b is "<<product(a,b)<<endl;

int money=100000;
cout<<"If you have "<<money<< "Rs in your bank account,you will receive "<<moneyReceived(money,1.1)<< "Rs after 1 year";
  
    return 0;
}