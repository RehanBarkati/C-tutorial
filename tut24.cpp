#include <iostream>
using namespace std;

class employee
{
    static int count; //it becoms a class variable
                      // int count=0;
    int id;

public:
    void setData()
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
      static void getCount(){
        // cout<<id; shows error because static function have access only to statics variable.
         cout<<"The value of count is "<< count<<endl;
     }
};
//count is the static data member of class employee
int employee::count; //default value is 0. But if we want to start from k then we can write as  int employee :: count=k.

int main()
{
    employee rehan, danish, harry;

    rehan.setData();
    rehan.getData();
    //rehan.getCount();
    employee::getCount();

    danish.setData();
    danish.getData();
    //danish.getCount();
    employee::getCount();

    harry.setData();
    harry.getData();
    employee::getCount();
    return 0;
}