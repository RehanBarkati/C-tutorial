#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
      int sum=0;
        for(int i=1;i<( n/2+1);i++){
            if(n%i==0){
                sum+=i;
            }
            cout<<sum<<endl;
        }
       return sum+=n;
        return 0;
    }
};

int main(){
    int n;
    cin >> n;
  //  AdvancedArithmetic *myCalculator = new Calculator(); OR
     AdvancedArithmetic *myCalculator;
     Calculator obj;
     myCalculator=&obj;
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}