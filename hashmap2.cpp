#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDuplicate(int* a,int size){
      vector<int> output;
      unordered_map<int,bool>seen;
      for(int i=0;i<size;i++){
          if(seen.count(a[i])>0){
              continue;
          }
          seen[a[i]]= true;
          output.push_back(a[i]);

      }
      return output;
}



int main(){
    int a[]={1,2,3,4,1,2,3,5,5,4};
    vector<int> output = removeDuplicate(a,10);
    for(int i=0;i<output.size();i++){
        cout<< output[i] <<endl;
    }
    
     return 0;
}