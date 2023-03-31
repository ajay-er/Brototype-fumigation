#include <stdio.h>
#include <stdlib.h>

int main(void){
    int cost,sell,price;
    printf("Enter cost price: ");
    scanf("%d",&cost);
    printf("Enter selling price: ");
    scanf("%d",&sell);
    
    if(cost<sell){
        price=sell-cost;
        printf("profit:%d",price);
    }else if(cost>sell){
         price=cost-sell;
         printf("loss:%d",price);
    }else{printf("no profit,no loss");}

}