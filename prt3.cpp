#include<iostream>
#include<vector>

using namespace std;

// void display(vector<int> &vec){
//         for(int i=0;i<36;i++){
//             cout<<vec[i]<<endl;
//         }
//     }

int main(){
    int ar[6][6];
    int arr[16];
    vector<int>vec;
    int count=0;

    
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>ar[i][j];
            vec.push_back(ar[i][j]);
        }
    }
    /*another way
    int hourglass=0    
      for(int i=0;i<4;i++){
          for(int=0;j<4;j++){
             hourglass=arr[i+1][j+1];
             for(int k=0;k<3;k++){
                 hourglass=hourglass + arr[i][j+k] +arr[i+2][j+k];
             }
          }
      }
    */
    for(int i=1;i<=22;i++){
        if(i%6!=0 && (i+1)%6!=0){
    
            arr[count]=vec[i-1]+vec[i]+vec[i+1]+vec[i+6]+vec[i+11]+vec[i+12]+vec[i+13]; 
                 count++;
        }
    }
    int largest=arr[0];
    for(int i=0;i<16;i++){
        if(arr[i]>=largest){
            largest=arr[i];
        }
    }
    cout<<largest;
    
    return 0;
}