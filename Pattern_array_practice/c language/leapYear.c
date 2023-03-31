#include <stdio.h>
#include <stdlib.h>

int main(void){
    int year;
    printf("Enter a year for check  if it is leap year or not ");
    scanf("%d",&year);
    if((year%4==0) && (year%100!=0)||(year%400==0)){
        printf("%d is leap year",year);
    }else{printf("common year ");}
}