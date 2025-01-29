#include<stdio.h>
int main(){
    int num,i;
    printf("Enter a number:\n");
    scanf("%d",&num);
    i=1;
    while(num>0){
      i=i*num;
      num--;
    } 
    printf("\nthe factorial of the number is %d",i);
    return 0;
}
