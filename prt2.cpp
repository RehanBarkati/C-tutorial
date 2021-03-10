#include<iostream>
#include<math.h>
using namespace std;

    
    int count1(int b[],int n){
        int p=0,q=0;
        for(int i=0;i<n;i++){
            if(b[i]==1){
                p++;
            }
            else if(p>=q){
                q=p;
                p=0;
            }
            else{
                p=0;
            }     
        }

        if(p>=q){
            q=p;
        }
        return q; 
    }

int main()
{
    int n;
    cin>>n;
   int b[100000];
   int i=0;
   while(n>0){
       b[i]= n%2;
       i++;
         
      n= n/2;   
   }
   
   int c= count1(b,i);
   cout<<c<<endl;
    return 0;


    /*one line coe
    int number,count=0;
    cin>>number;
    while(number!=0){
        number= number & (number<<1);
        count++;
    }
    
    */

}
