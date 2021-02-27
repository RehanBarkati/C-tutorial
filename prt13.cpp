#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int migratoryBirds(vector<int> vec){
    int p1=0,p2=0,p3=0,p4=0,p5=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==1){
            p1++;
        }
       else if(vec[i]==2){
            p2++;
        }
       else if(vec[i]==3){
            p3++;
        }
       else if(vec[i]==4){
            p4++;
        }
        else{
            p5++;
        }
    }
   unordered_map<int, int>a;
       a[1]=p1;
       a[2]=p2;
       a[3]=p3;
       a[4]=p4;
       a[5]=p5;
   
   int b=a[1];
   int c=1;;
   for(int i=2;i<=5;i++){
       if(a[i]>b){
           b=a[i];
           c=i;
           
       }
   }
    return c;
}

int main(){
    int n;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        vec.push_back(p);
    }
    cout<<migratoryBirds(vec);
}
