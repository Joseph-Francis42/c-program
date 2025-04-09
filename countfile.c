#include<stdio.h>
int main(){
    FILE *fp;
    char cha;
    int word=0,chara=0,lines=0;
    fp=fopen("newfile.txt","r");
    while(fscanf(fp,"%c",&cha)==1){
         chara++;
         if(cha==' ' || cha == '.'){
             word++;
         }
         if(cha == '\n'){
            lines++;
         }   
    }
    printf("Word count=%d",word);
    printf("Total charcters count=%d",chara);
    printf("no of lines=%d",lines);
    fclose(fp);
    return 0;
}    
        
         
         
         
