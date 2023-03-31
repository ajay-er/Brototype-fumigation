#include <stdio.h>
#include <string.h>

int main(void)
{   
    int i,j,n;
    char  s[10];
    printf("Enter a Name :");
    scanf("%s",s);
    int k=strlen(s);
    n=k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j|| i+j==n+1)
            {
                printf("X ");
            }
            else
            {
                printf("  " );
            }
        }
        printf("\n");
    }
}