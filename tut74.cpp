#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //Function objects(functors): Function wrapped in a class so that it is available like an object.

    int arr[]={1,5,2,18,13};
    sort(arr,arr+5,greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

     return 0;
}