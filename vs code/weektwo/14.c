#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j,n;
    char s[10];
    printf("Enter a name:");
    scanf("%s",s);
    
    n=strlen(s);
    if(n%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i || i+j==n+1)
            {
                printf("X ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

}