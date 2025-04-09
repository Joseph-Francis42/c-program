#include<stdio.h>
void readfile(FILE *fp){
     int num;
     while(fscanf(fp,"%d",&num)==1){
         printf("\t%d",num);
     }
     fclose(fp);
}    
int main(){
      FILE *fp1,*fp2,*fp3;
      fp1=fopen("file.txt","r");
      fp2=fopen("odd.txt","w");
      fp3=fopen("even.txt","w");
      int num;
      
      while(fscanf(fp1,"%d",&num)==1){
           if(num%2==0){
              fprintf(fp3,"%d\t",num);
           }
           else{
              fprintf(fp2,"%d\t",num);
           }   
      }
      fclose(fp1);
      fclose(fp2);
      fclose(fp3);
      printf("\nThe input text file content");
      fp1=fopen("file.txt","r");
      readfile(fp1);
      printf("\nThe even number file contents");
      fp3=fopen("even.txt","r");
      readfile(fp3);
      
      printf("\nThe odd number text file contents");
      fp2=fopen("odd.txt","r");
      readfile(fp1);
      
      
      
      
      return 0;
}     

    
