#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    
    Difference(vector<int> a){
        int size=a.size()-1;
        for(int i=0;i<size;i++){
            for(int j=i+1;j<=size;j++){
                int c=a[i]-a[j];
                elements.push_back(abs(c));    
            }
        }
    }

    
    void computeDifference(){
        maximumDifference=elements[0];
        for(int i=1;i<elements.size();i++){
            if(elements[i]>maximumDifference){
                maximumDifference=elements[i];
            }
        }
    }

}; 

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
   d.computeDifference();
    
   cout << d.maximumDifference;
    
    return 0;
}