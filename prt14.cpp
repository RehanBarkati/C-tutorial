#include<iostream>
#include<vector>
using namespace std;

void bonAppetit(vector<int> vec,int k,int b){
    int a=0;int pay;
    for(int i=0;i<vec.size();i++){
        if(i==k){
            continue;
        }
        else{
            a += vec[i];
        }
        cout<<"The value of a is "<<a<<endl;
    }
    pay= a/2;
    if(b>pay){
        cout<< b-pay <<endl;
    }
    else{
        cout<<"Bon Appetit"<<endl;
    }
    
}
int main (){
    vector<int>vec;
    int k,b,n;
    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        vec.push_back(p);
    }
    cin>>b;
    bonAppetit(vec,k,b);
}