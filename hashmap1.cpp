#include<iostream>
#include<unordered_map>
#include<string.h>
using namespace std;

int main(){
    unordered_map<string,int>map;
    //insert
    //map.insert(pair<string,int>("abc",1));  OR   
    map["a"]=1;    
    pair<string,int>p{"b",2};
    map.insert(p);

    //find or access
     cout<<"size: "<<map.size()<<endl; 
     cout<<map["a"]<<endl;
     cout<<map.at("b")<<endl;

    //  cout<<map.at("c")<<endl; -->  gives error
     cout<<map["c"]<<endl;   //--> does not give error and return default value 0.
      cout<<"size: "<<map.size()<<endl; 
    // to check whether a key exist or not

    if(map.count("c")>0){
        cout<<"c is present";
    }

    //erase

    map.erase("c");
    if(map.count("c")>0){
        cout<<"c is present";
    }
     cout<<"size: "<<map.size()<<endl; 

    
     return 0;
}