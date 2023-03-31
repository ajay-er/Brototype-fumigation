#include  <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<n;i++)
    {   
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {   
                printf("^* ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
     for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("^* ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}
