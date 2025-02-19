#include <stdio.h>
#include <string.h>
int main(){
    char str1[20],str2[20];
    printf("Enter a string:");
    scanf("%s",str1);
    printf("Enter a string:");
    scanf("%s",str2); 
    if(strcmp(str1,str2)==0){
       printf("Both are same strings");
    }
    else{
       printf("Strings are not equal");
    }   
    return 0;
}    
