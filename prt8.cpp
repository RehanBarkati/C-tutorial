#include<iostream>
#include <numeric> 
#include<vector>

using namespace std;

int birthday(vector<int> s,int d,int m){
    int sum=0;
    int count=0;
    
    for(int i=0;i<s.size()+1-m;i++){
        for(int j=i;j<i+m;j++){
            sum+=s[j];
        }

         if(d==sum){
             count++;
             sum=0;
         }
         else{
             sum=0;
         }
    }
    return count;
}

int main(){
    int n,d,m;
    vector<int>s;
    
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        s.push_back(p);
    }
    cin>> d >> m;
    
    
    
   cout<<birthday(s,d,m);
}
