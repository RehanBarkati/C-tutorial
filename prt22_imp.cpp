#include <bits/stdc++.h> 

using namespace std;
//no need of this 
// bool comp(string a,string b){
//     return a<b;
// }

/*instead of using this function we can directly use sort*/
// vector<string> sortfun(vector<string> n){
//     sort(n.begin(),n.end());
//     return n;
// }

int main(){
    int p;
    cin>>p;
    vector<vector<string>>v(p);
    vector<string>n;
    for(int i=0;i<p;i++){
        v[i].resize(2);
        cin>> v[i][0] >> v[i][1];
    }
    
    for(int i=0;i<p;i++){
        string a=v[i][1];
        string b=v[i][0];
        if(a.substr(a.size()-10)=="@gmail.com"){
            n.push_back(b);
        }
    }
    // for(int i=0;i<n.size();i++){
    //     cout<<n[i]<<endl;
    // }
   // n=sortfun(n);
   sort(n.begin(),n.end());
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<endl;
    }
}
