#include <stdio.h>
#include <stdlib.h>

int main(void){
    float salary,gross,DA,HA;
    printf("Enter your salary");
    scanf("%f",&salary);
    if(salary<=10000){
        HA=salary*0.2;
        DA=salary*0.8;
        
    }else if(salary <=20000){
        HA=salary*0.25;
        DA=salary*0.9;
       
    }else{
        HA=salary*0.3;
        DA=salary*0.95;
    }
    gross=salary+HA+DA;
        printf("Gross Salary:%.2f",gross);
}