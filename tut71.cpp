#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
      //  cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}

int main(){
    //ways to create a vector
      vector <int> vec1; //zero lenght vector
        //  vec1.push_back(1);
        //  display(vec1);
      vector <char> vec2(4); //4 lenght character vector
        // vec2.push_back('5');
        //   display(vec2);
      vector <char> vec3(vec2);//4 lenght character vector from vec2
           
      vector <int> vec4(6,3);// 6 element vector of 3s.
       // display(vec4);

      int element,size=5;
    //   cout<<"Enter the size of your vector: ";
    //   cin>>size;
    //   for (int i = 0; i < size; i++)
    //   {
    //       cout<<"Enter an element to add this vector : ";
    //       cin>>element;
    //       vec1.push_back(element);
    //   }
      //vec1.pop_back();
      
    //   display(vec1);
    //   vector<int> :: iterator iter =vec1.begin();
    //  // vec1.insert(iter+1,5,556);// iter +1 points to second element and hence insert 556 before that.5 denote number of copies
    //   display(vec1);
    for(int i=0;i<5;i++){
       vec1.push_back(i+1);
    }

    vector<int>vec5;
    vec5=vec1;
    for(int i=0;i<vec1.size();i++){
      cout<<vec5[i]<<endl;
    }
      
     return 0;
}