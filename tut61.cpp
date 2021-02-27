#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting our file with write stream
    ofstream write("sample60.txt");

    //creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name : ";
    cin>>name;

    //writing a string to the file
    write<<"My name is "<<name;;
    write.close();

    ifstream read("sample60.txt");
    string content;
    getline(read,content);
    cout<<"The content of this file is : "<<content;
    read.close();
     return 0;
}