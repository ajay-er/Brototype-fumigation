#include <stdio.h>
int main(void)
{
    int i,j,n=5,p=65,c=1;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("%c ",p);
            }
            else
            {
                printf("%d ",c);
            }
        }
        if(i%2==0)
        c++;
        else
        p++;
        printf("\n");
    }
}