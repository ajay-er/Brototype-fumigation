#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,n=9;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {

            if(j==1||i==j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }

        }
        for(s=i;s<n;s++)
        {
            printf("  ");
        }
        for(s=i;s<=n-1;s++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||i==j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }


    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {   


            if(j==i||j==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for(s=1;s<i;s++)
        {
            printf("  ");
        }
        for(s=1;s<i;s++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {  

           
            if(j==i||j==n)
            {   
                
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}