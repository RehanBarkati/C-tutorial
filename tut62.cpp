#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    //using the member function open()
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me ";
    out.close();

    ifstream in;
    string st;
    in.open("sample60.txt");
    while(in.eof() ==0){
        getline(in,st);
        cout<<st;
    }
    in.close();
     return 0;
}