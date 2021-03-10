#include <bits/stdc++.h> 
using namespace std;


//use of regex function
int main(){
    int n;
    cin>>n;
    list<string>name;

    while(n>0){
        string firstname;
        string emailId;
        cin>>firstname>>emailId;
        if(regex_match(emailId,regex(".+@gmail.com"))){
              name.push_back(firstname);
        }
        n--;

    }
    name.sort();
  while(!name.empty()){
   cout<<name.front()<<endl;
   name.pop_front();
  }
}