#include<stdio.h>
int main(){
      int limit,i,input,largest,smallest;
      printf("\nEnter the limit of the array:");
      scanf("%d",&limit);
      int array[limit];
      printf("\nEnter the elements:");
      for(i=0;i<limit;i++){
            scanf(" %d",&array[i]);
      }
      largest=array[0];
      smallest=array[0];
      for(i=0;i<limit;i++){
            if(largest<array[i]){
                 largest=array[i];
            }
            if(smallest>array[i]){
                 smallest=array[i];
            }
      }
      printf("%d is the smallest element\n",smallest);
      printf("%d is the largest element\n",largest);
      
      return 0;
}      
