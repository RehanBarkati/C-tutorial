#include<iostream>
using namespace std;

class shopItem{
    int id;
    float price;
    public:
      void setdata(int a,int b){
          id=a;
          price=b;
      }
      void getdata(){
          cout<<"Code of this item is "<<id<<endl;
          cout<<"Price of this is "<<price<<endl;
      }
};
int main(){
    int size=3;
    //int *ptr=new int[10];
    //general_store item,veggies item ,hardware item;
    shopItem *ptr=new shopItem[size];
    shopItem *ptrtemp=ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<" Enter Id and price of item "<<i+1<<": ";
        cin>> p >> q;

        (*ptr).setdata(p,q);
        ptr++;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number : ";
        ptrtemp->getdata();
        ptrtemp++;
    }
    

     return 0;
}