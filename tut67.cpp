#include<iostream>
using namespace std;


// float funcAverage(int a,int b){
//     float avg=(float)(a+b)/2;
//     return avg;
// }
// float funcAverage2(int a,float b){
//     float avg=(a+b)/2;
//     return avg;
// }

template<class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
template < class T1,class T2 >
float funcAverage(T1 a,T2 b){
    float avg=(float)(a+b)/2;
  
    return avg;
}

int main(){
    cout<<funcAverage(3,2.4)<<endl;
      int x=5,y=7;
    swapp(x,y);
    cout<<x<<" "<<y<<endl;
    
     return 0;
}