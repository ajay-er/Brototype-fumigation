#include <stdio.h>\

int main(void)
{
    int i,j,n=5,p;
    for(i=1;i<=n;i++)
    {
            if(i%2==1)
            {
                for(j=1;j<=5;j++)
                {
                    printf("* ");
                }
            }
            else
            {
                for(j=1;j<=3;j++)
                {
                    printf("x ");
                }
            }
            if(i==n)
            break;
            printf("\n*\n*\n");      
    }
}