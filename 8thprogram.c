#include<stdio.h>
int main(){
    int year;
    printf("\nEnter a year:");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0){
        printf("\nThe given year is leap year");


    }else{
        printf("\nThe given year is not leap year");

    }
    return 0;



}