#include<iostream>
#include<string>

using namespace std;

string catAndMouse(int x,int y,int z){
    if((x+y)==2*z  || x==y){  // x==y is important condition.
        return "Mouse C";
    }
    else if(abs(z-x) > abs(z-y)){
        return "Cat B";
    }
    else{
        return "Cat A";
    }
}

int main(){
    int q;
    cin>>q;
    int x,y,z;
    for(int i=1;i<=q;i++){
        cin>>x>>y>>z;
        cout<<catAndMouse(x,y,z)<<endl;
    }
    
}
