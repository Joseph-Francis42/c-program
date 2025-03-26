#include<stdio.h>
#define PI 3.14159
#define AREA(r)(PI*r*r)
#define CYLINDER(radius,h)(2*PI*radius*(radius+h))

int main(){
   float r,h,radius;
   printf("enter the radius of the circle:");
   scanf("%f",&r);
   printf("enter the radius and heigth of the cylinder");
   scanf("%f%f",&radius,&h);
   printf("\n%2f is the area of the circle",AREA(r));
   printf("\n%2f is the area of the cylinder",CYLINDER(radius,h));
   return 0;
 }  
