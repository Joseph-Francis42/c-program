/*
Author: Joseph Francis
Date: 02-04-25
Description: Write a program to store the details of n students 
*/

#include<stdio.h>
typedef struct{
      int rollno;
      char name[20];
      float cgpa;
}student;
   int main(){
         student s[3];
         for(int i=0;i<3;i++){
             printf("Enter the name:\n");
             scanf("%s",s[i].name);
             printf("enter the roll no:");
             scanf("%d",&s[i].rollno);
             printf("enter the cgpa:");
             scanf("%f",&s[i].cgpa);
          }
          printf("The student details:");
          for(int i=0;i<3;i++){
             printf("\nname=%s",s[i].name);
             printf("\nroll no=%d",s[i].rollno);
             printf("\ncgpa=%f",s[i].cgpa);
             printf("\n");
          }
          return 0;
   }       
