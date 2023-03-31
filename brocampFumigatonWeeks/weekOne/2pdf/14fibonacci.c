#include <stdio.h>

int main(void)
{
    int i,j,limit,n1=0,n2=1,n;
    printf("Enter series limit: ");
    scanf("%d",&limit);
    printf("%d %d ",n1,n2);
    for(i=2;i<=limit;i++)
    {   
        n=n1+n2;
        printf("%d ",n);
        n1=n2;
        n2=n;
        
    }
}