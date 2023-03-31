#include <string.h>
#include <stdio.h>

int main(void)
{
    int i,j,m,n;
    char str[]={"MALAYALAM"};
    int k=strlen(str);

    for(i=1;i<=k;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c ",str[j]);
        }
        printf("\n");
    }
}