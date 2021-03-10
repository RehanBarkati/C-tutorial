#include <bits/stdc++.h> 
using namespace std;

void display(list<int> &lst){
   // list<int> :: iterator it;
    for(auto it=lst.begin();it!=lst.end();++it){
        cout<<*it<<" ";
    }
    // for(it=lst.begin();it!=lst.end();++it){
    //     cout<<*it<<" ";
    // }
     cout<<endl;
}

int main(){
     list<int>list1;   //list of 0 length
     list1.push_back(5);
     list1.push_back(10);
     list1.push_back(13);
     list1.push_back(8);
     list1.push_back(9);
     display(list1);

     //removing element from the list.

     //list1.pop_back();  
    // list1.pop_front();
    //list1.remove(7);
     
    // list1.sort();
    //sorting the list
    // display(list1);

    //reversing the list
    //list1.reverse();

    //  list<int>list2(3); //empty list of size 3
    //  list<int> :: iterator iter;
    //  iter=list2.begin();
    //  *iter=6;
    //  iter++;
    //  *iter=50;
    //  iter++;
    //  *iter=10;
     
       list<int>list2;   //list of 0 length
     list2.push_back(5);
     list2.push_back(6);
     list2.push_back(50);
     list2.push_back(10);

     display(list2);

     list1.merge(list2);
    cout<<"List1 after merging : ";
    display(list1);
     return 0;
}