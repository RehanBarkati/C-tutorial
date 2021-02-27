#include<iostream>
#include<vector>
using namespace std;

class student{
    vector<int>vec;
    public:
     student(vector<int> &scores){
        vec=scores; 
         for(int i=0;i<vec.size();i++){
             cout<<vec[i]<<endl;
         }
     }
};
int main(){
    vector<int>scores;
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        scores.push_back(p);
    }

    student* s=new student(scores);
     return 0;
}