#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num,i,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {   sum=i*num;
        printf("%dx%d=%d\n",i,num,sum);
        printf("\n");
    }
    
}