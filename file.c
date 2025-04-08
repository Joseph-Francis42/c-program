#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("file.txt","w");//open the file in the write mode
    putc('A',fp);//write a char into the file
    fclose(fp);//close the file
    fp=fopen("file.txt","r");//open in the read mode
    char ch=getc(fp);//read the char from the file
    printf("%c",ch);
    fclose(fp);//close the file
    return 0;
}
