#include<stdio.h>
int main(){
    char grade;
    printf("\nEnter the grade(E,V,G,A,F):");
    scanf("%c",&grade);
    switch(grade){
        case 'A':
        printf("\nAverage");
        break;
        case 'E':
        printf("\nExcellent");
        break;
        case 'V':
        printf("\nVery good");
        break;
        case 'G':
        printf("\nGood");
        break;
        case 'F':
        printf("\nFail");
        break;
        default:
        printf("\nInvalid grade");
    }
    return 0;


}