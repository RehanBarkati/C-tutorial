#include<iostream>
#include<fstream>
using namespace std;
/*
 The useful classes for working with files in c++ are :
 1. fstreambase 
 2. ifstream--> derived from fstream
 3. ofstream -->derived from fstream

 In order to work with files in C++, we will have to open it.Primarily, there are 2 ways to open a file :
 1.using the constructor
 2.Using the member function open() of the class.
*/
int main(){
     string st="Rehan bhai";
     string st2;
      // opening file using constructor and writing it

    ofstream out("sample60.txt");//write operation   out is an object
    out<<st;

   //opening file using constructor and reading it
//   ifstream in("sample60.txt"); // in is an object
//   in>>st; // does not print when space are encountered.
//    getline(in,st2);
//    cout<<st;
     return 0;
}