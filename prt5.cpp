#include<iostream>
#include<vector>
using namespace std;

void countApplesAndOranges(int s,int t,int a,int b,int m,int n,vector<int> apple,vector<int> orange){
    
    int cApple=0,cOrange=0;
        for (int i=0; i<m;i++) {
             if (a+apple[i]>=s && a+apple[i]<=t ){
                 cApple++;
             }  
    }
    for (int i=0; i<n;i++) {
             if (b+orange[i]>=s && b+orange[i]<=t ){
                 cOrange++;
             }  
    }
    
    cout<<cApple<<endl;
    cout<<cOrange<<endl;
}

int main(){
    int s,t,a,b,m,n,p;
    vector<int>apple;
    vector<int>orange;
    
    cin>> s >> t ;
    cin>> a >> b ;
    cin>> m >> n ;
    
    for(int i=0;i<m;i++){
        cin>>p;
        apple.push_back(p);
        cout<<"apple"<<endl;
    }
    for(int i=0;i<n;i++){
        cin>>p;
        orange.push_back(p);
        cout<<"orange"<<endl;
    }
    countApplesAndOranges(s,t,a,b,m,n,apple,orange);
    
    return 0;
}