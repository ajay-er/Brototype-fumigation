#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j,n;
    char s[30];
    printf("Enter name");
    scanf("%s",s);
    n=strlen(s);
    for(i=1;i<=n;i++)
    { 
        for(j=0;j<i;j++)
        {
            printf("%c ",s[j]);
        }
        printf("\n");
    }
}