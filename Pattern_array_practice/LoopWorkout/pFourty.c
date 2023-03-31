#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,num,s;
    char alp='A';
    printf("Enter your number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(s=-1;s<=num-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
}