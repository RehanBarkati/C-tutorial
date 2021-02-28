#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int sockMerchant(vector<int>v,int n){
      int count=0;
        unordered_map<int, int>map;
        for(int i=0;i<n;i++){
          if(map.count(v[i])>0){
          continue;
        }
        else{
            int p=1;
            for(int j=i+1;j<n;j++){
                if(v[i]==v[j]){
                    p++;
                }
            }
            map.insert(pair<int,int>(v[i],p));
        }
    }
    
    unordered_map<int,int>:: iterator i ;
     for(i=map.begin();i!=map.end();i++){
         cout<< (*i).second <<endl;
     }
     for(i=map.begin();i!=map.end();i++){
         if((*i).second % 2==0){
             count=count+ (*i).second /2 ;
         }
         else{
             count= count + ((*i).second - 1)/2 ;
         }
     }  
    return count;             
}
int main(){
    int n;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    
    cout<<sockMerchant(v, n);
    return 0;
}
