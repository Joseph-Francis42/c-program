#include<stdio.h>
int main(){
      int limit,i,j;
      printf("\nEnter the limit of the array:");
      scanf("%d",&limit);
      int array[limit];
      printf("\nEnter the elements:");
      for(i=0;i<limit;i++){
            scanf("%d",&array[i]);
      }
      for(i=0;i<limit-1;i++){
            for(j=0;j<limit-i;j++){
                if(array[j]>array[j+1]){
                   int temp=array[j];
                   array[j]=array[j+1];
                   array[j+1]=temp;
                }
            }
      }
      printf("\nThe sorted array:\t");
      for(i=0;i<limit;i++){
                printf("%d\t",array[i]);
      }    
                 
      return 0;
}
                
    
                   
