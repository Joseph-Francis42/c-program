
#include<stdio.h>
int main(){
    float side1,side2,side3;
    printf("\nEnter the three sides:");
    scanf("\n%f\n%f\n4%f",&side1,&side2,&side3);
    if(side1==side2&&side2==side3){
    printf("\nThe triangle is equilateral");


    }else if(side1==side2||side2==side3||side1==side3){
        printf("\nThe triangle is isosceles");

    }else{
        printf("\nThe triangle is scalene");
    }
   

     return 0;


}