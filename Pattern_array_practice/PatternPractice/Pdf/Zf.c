#include<stdio.h>

int main(void)
{
    int i,j,n=5,c=0;
    int a=1;
    int b=65;

    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=i;j++)
        {   
            if(i%2==0)
            {
                printf("%d",a);
            }
            else
            {
                printf("%c",b);
            }
        }
        if(i%2==0)
        {
            a++;
        }
        else
        {
            b++;
        }
        printf("\n");
    }
}