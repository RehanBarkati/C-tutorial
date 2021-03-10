#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int T; 
   scanf("%d",&T);
   
   char S[2][10000];
   for(int i=0;i<T;i++){
       scanf("%s",&S[i][0]);
   }
   
  for (int i=0;i<T;i++){
      
      for(int j=0;j<5000;j++){
          if(*(*(S+i)+ 2*j)=='\0'){
              break;
          }
          else{
          printf("%c",*(*(S+i)+ 2*j));
          }
      }
        printf(" ");
        
      for(int j=0;j<5000;j++){
         if(*(*(S+i)+ (2*j)+1)=='\0'){
             break;
         }
         else{
          printf("%c",*(*(S+i)+ (2*j)+1));
         }
      }
      
      printf("\n");
  }
   
   
   
   
    return 0;
}
