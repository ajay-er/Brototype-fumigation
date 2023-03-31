#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,num,sum=0;
    float avg;
    printf("Enter 10 numbers");
    for(i=1;i<=10;i++){
        printf("\nNumber -%d\t",i);
        scanf("%d",&num);
        sum=sum+i;
    }printf("sum of total:%d \n",sum);
    avg=sum/10.0;
    printf("Avarage :%f",avg);
}