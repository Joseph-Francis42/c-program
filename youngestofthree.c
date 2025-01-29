#include<stdio.h>
int main(){
   int age1,age2,age3;
   printf("Enter the age of ram:\n");
   scanf("%d",&age1);
   printf("Enter the age of shyam:\n");
   scanf("%d",&age2);
   printf("Enter the age of ajay:\n");
   scanf("%d",&age3);
   if(age1<age2&&age1<age3){
      printf("Ram is the youngest\n");
   } 
   else if(age2<age1&&age2<age3){
      printf("Shyam is the youngest\n");
   }
   else{
      printf("Ajay is the youngest\n");
   }
   return 0;
}
