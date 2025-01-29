#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
       if(num1>num3){
          printf("\n%d is the larsgest value",num1);
       }   
        
     }else if(num2>num3){
          if(num2>num1){
              printf("\n%d is the largest value",num2);
          }    
      }else{
          printf("%d is the largest value",num3);
       }
    return 0;  
     
}
