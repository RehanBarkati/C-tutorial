#include <bits/stdc++.h>

using namespace std;


int main(){
    vector<int>v;
    int T;
    cin>>T;
    int N,K;
    
    
    for(int i=0;i<T;i++){
        cin>>N>>K;
     int min=0;
      for(int j=1; j<N; j++){
        for(int k=j+1;k<=N;k++){
            int result= j&k ;
            if(result > min && result < K){
                min=result;
            }
        }
     }
     cout<<min<<endl;   
}
   

    return 0;
}
