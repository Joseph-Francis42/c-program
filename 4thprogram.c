#include<stdio.h>
int main(){
    int maths,physics,chemistry,total,mathsphysics;
    printf("enter marks in maths:");
    scanf("%d",maths);
    printf("enter marks in physics:");
    scanf("%d",physics);
    printf("enter marks in chemistry:");
    scanf("%d",chemistry);
    total=maths+physics+chemistry;
    mathsphysics=maths+physics;
  
    if(maths>=65&&physics>=55&&chemistry>=50&&total>=190||mathsphysics>=140){
        printf("you are eligible for admission");


    }else{
        printf("you are not eligible for admission");
    }
    return 0;
















}