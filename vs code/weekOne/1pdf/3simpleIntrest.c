#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int P;
    float R,N,SI=0;
    printf("Enter principle amount: ");
    scanf("%d",&P);
    printf("Enter Interest rate : ");
    scanf("%f",&R);
    printf("Enter Number of years: ");
    scanf("%f",&N);
    SI=((P*R*N)/100);
    printf("Simple interst is :%f",SI);
}