#include <stdio.h>
int main(){
    int num1,num2,result;
    char operation;

    printf("\nenter the first number;");
    scanf("%d",&num1);
    printf("enter the operator:+,-,*,/");
    scanf(" %c",&operation);

    printf("enter the second number:");
    scanf("%d",&num2);
  
    
    switch(operation){
        case '+':
           result=num1+num2;
           printf("%d+%d=%d",num1,num2,result);
           break;
        case'-':
           result=num1-num2;
           printf("%d-%d=%d",num1,num2,result);
           break;
        case'*':
            result=num1*num2;
            printf("%d*%d=%d",num1,num2,result);
        case'/':
    
            result=num1/num2;
            printf("%d/%d=%d",num1,num2,result);


        default:
           printf("\ninvalid operation");
    return 0;










    }






}
