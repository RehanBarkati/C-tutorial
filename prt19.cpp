#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int getMoneySpent(int b,vector<int>key,vector<int>derives){
    
    vector<int>p;
    
    for(int i=0;i<key.size();i++){
        for(int j=0;j<derives.size();j++){
            if(key[i]+derives[j]<= b){
                p.push_back(key[i]+derives[j]);
            }
        }
    }
    
    if(!p.empty()){
         int larg=p[0];
        for(int k=1;k<p.size();k++){
            if(p[k]>p[0]){
                larg=p[k];
            }
        }
        return larg;
    }
    else{
        return -1;
    }
    
}

int main(){
    int b,n,m;
    cin>>b>>n>>m;
    
    
    vector<int>key;
    vector<int>derives;
    
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        key.push_back(p);
    }
    for(int i=0;i<m;i++){
        int q;
        cin>>q;
        derives.push_back(q);
    }
    
   cout<< getMoneySpent(b,key,derives);
    
    
}