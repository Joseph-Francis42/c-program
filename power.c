#include<stdio.h>
int power(int base,int exponent){ 
   if(exponent==0){
      return 1;
    }
    else{
      return base*power(base,exponent-1);
    }
}
 int main(){
     int base,exponent;
     printf("enter the base and exponent:");
     scanf("%d%d",&base,&exponent);
     int result=power(base,exponent);
     printf("%d is the result",result);
     return 0;
  }   
