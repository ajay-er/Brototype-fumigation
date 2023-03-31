#include <stdio.h>

int main(void)
{
    int i,j,n=4,c,arr[10];
    for(i=1;i<=n;i++)
    {
        printf("_ _");
        for(j=i;j<=n;j++)
        {
            printf("X ");
        }
        printf("\n_");
         for(j=i;j<=n;j++)
        {
            printf("X ");
        }
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("X\n");
        }



    }
}