#include<stdio.h>
int main(){
    int day;
    printf("enter a day number(1-7):");
    scanf("%d",&day);
    switch(day){
        case 1:
           printf("\nsunday");
           break;
        case 2:
           printf("\nmonday");
           break;
        case 3:
           printf("\ntuesday");
           break;
        case 4:
           printf("\nwednesday");
           break;
        case 5:
           printf("\nthursday");
           break;
        case 6:
           printf("\nfriday");
           break;
        case 7:
           printf("\nsaturday");
           break;
        default:
           printf("\nInvalid number");
           break;






    }
    return 0;




}