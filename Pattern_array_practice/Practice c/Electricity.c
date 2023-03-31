#include <stdio.h>
#include <stdlib.h>

int main(void){
    int unit;
    float amount,totalAmount,surCharge;
    printf("enter Your unit: ");
    scanf("%d",&unit);
    if(unit<=50){
        amount=unit*0.50;
    }else if(unit<=150){
        amount=25+(unit-50)*0.75;
    }else if(unit<=250){
        amount=100+(unit-150)*1.20;
    }else{
        amount=300+(unit-250)*1.50;
    }surCharge=amount*0.2;
     totalAmount=surCharge+amount;
     printf("Eletricity bill:%.2f",totalAmount);
}