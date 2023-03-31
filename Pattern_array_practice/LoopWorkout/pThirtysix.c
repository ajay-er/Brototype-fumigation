#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,s,j,num;
    printf("Enter raw count ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(s=-1;s<=num-i;s++)
        {
            printf(" ");

        }
        for(j=1;j<=i;j++)
        {
            printf( "%d",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}