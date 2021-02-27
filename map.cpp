#include<string.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    int n;
    cin>>n;
    
    int count=0;
    string name,key;
    int number;
    
    
    
    map<string,int>phoneBook;
    
    for(int i=0;i<n;i++){
        cin>>name>>number;
       phoneBook.insert(pair<string,int>(name,number));   
    }
    
    
      while(cin>>key){
          map<string,int> :: iterator it;
     if((it= phoneBook.find(key)) !=phoneBook.end()){
         cout<<(*it).first<<"="<<phoneBook.at(key)<<endl;
     }
     else{
         cout<<"Not found"<<endl;
     }
    } 
  
    return 0;
}
