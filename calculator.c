#include<stdio.h>
int main(){
   int num1,num2;
   char operation;
   printf("Enter two numbers:\n");
   scanf("%d",&num1);
   scanf("%d",&num2);
   printf("\nEnter the operation(+,-,/,*,%%):");
   scanf(" %c",&operation);
   switch(operation){
      case '+':
      printf("%d+%d=%d",num1,num2,num1+num2);
      break;
      case '-':
      printf("%d-%d=%d",num1,num2,num1-num2);
      break;
      
      case '/':
      printf("%d/%d=%d",num1,num2,num1/num2);
      break;
      
      case '*':
      printf("%d*%d=%d",num1,num2,num1*num2);
      break;
      case '%':
      printf("%d %% %d=%d",num1,num2,num1%num2);
      break;
      
      
      
      
      
      
      default:
      printf("Invalid operation");
      break;
   }
   return 0;
   
}
