#include <stdio.h>

int main(void)
{
    int i,s,m,j,n=4,k,p=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*i)-1;j++)
        {
            if(i==n && j>((2*n)-1)-3)
            {
                 //printf("* ");
                 break;
            }
            else
            {
                printf("* ");
            }
        }
        for(m=1;m<((2*p-1)*2)-4;m++)
        {
        printf("  ");
        }
        //for(k=1;k<2*p-1;k++)
       // {
       // printf("  ");
       // }
        for(s=1;s<=(2*i)-1;s++)
        {
            printf("* ");
        }p--;
        printf("\n");
    }
}