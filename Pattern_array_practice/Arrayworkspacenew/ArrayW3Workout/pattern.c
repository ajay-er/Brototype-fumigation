#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,n=9,c=0;
    for(i=1;i<n;i++)
        {
            if(i%2==0)
                {
                    printf("\n");
                    for(j=1;j<=i*2;j++)
                        {
                            printf("*");
                        }
                }
            else
            {
                c++;
                for(j=1;j<=c;j++)
                    {
                        printf("\n*");
                    }
            }
        }
}