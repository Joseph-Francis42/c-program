#include <stdio.h>
int main(){
    char str1[20],temp;
    printf("Enter a string:");
    scanf("%s",str1);
    int lenght,i,j;
    for(lenght=0;str1[lenght]!='\0';lenght++);
    i=lenght-1;
    for(j=0;j<lenght/2;j++){
       temp=str1[i];
       str1[i]=str1[j];
       str1[j]=temp;
       i--;
    }
    printf("The reversed string is:");
    puts(str1);
    
    return 0;
}    
    
    
       
    
