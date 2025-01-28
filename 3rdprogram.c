#include<stdio.h>
int main(){
    int costprice,sellingprice,profit,loss;
    printf("\nEnter the cost price:");
    scanf("%d",&costprice);
    printf("\nEnter the selling price:");
    scanf("%d",&sellingprice);
    if(costprice<sellingprice){
        profit=sellingprice-costprice;
        printf("profit is %d",profit);




    }else{
        loss=costprice-sellingprice;
        printf("loss is %d",loss);

    }

    return 0;        





}