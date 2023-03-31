#include<stdio.h>

int main(void)
{
    int i,j;
    int n=10,a;

    
    for(i=0;i<n;i++)
    {
        a=n-i;
        for(j=0;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
}