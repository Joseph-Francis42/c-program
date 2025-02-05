#include<stdio.h>
int main(){
      int limit,i,input;
      printf("\nEnter the limit of the array:");
      scanf("%d",&limit);
      printf("\nEnter the input number:");
      scanf("%d",&input);
      int array[limit];
      printf("\nEnter the elements:");
      for(i=0;i<limit;i++){
            scanf(" %d",&array[i]);
      }
      for(i=0;i<limit;i++){
             if(array[i]==input){
                  printf("The number %d is found in position %d\n",input,i+1);
             }    
      }
      return 0;
}
          
