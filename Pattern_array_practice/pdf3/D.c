#include <stdio.h>

int main(void)

{
    int i,j,n=8,p,k=1,s;
    printf("*\n");
    for(i=1;i<n;i++)
    {   printf("* ");
        k=1;
    
        for(j=1;j<=i;j++)
        {  
            printf("%d ",k++);
        }k=k-2;
        for(p=1;p<i;p++)
        {      
            printf("%d ",k--);
        }
        printf("* ");
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {   k=1;
        printf("* ");
        for(j=i;j<=n;j++)
        {
            printf("%d ",k++);
        }k=k-2;
        for(s=i;s<n;s++)
        {
            printf("%d ",k--);
        }
        printf("* ");
        printf("\n");
    }
     printf("*\n");
}