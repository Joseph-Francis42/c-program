#include<stdio.h>
int main(){
    float temp;
    printf("Enter the temperature:\n");
    scanf("%f",&temp);
    if(temp<0){
        printf("\nFreezing weather");
    }
    else if(0<=temp && temp<10){
        printf("\nVery cold weather");
    }
    else if(10<=temp && temp<20){
        printf("\ncold weather");
    }
    else if(20<=temp && temp<30){
        printf("\nNormal temperature");
    }
    else if(30<=temp && temp<40){
        printf("\nHot");
    }
    else{
        printf("\nVery hot");
        
    }
    
  return 0;
}
  
