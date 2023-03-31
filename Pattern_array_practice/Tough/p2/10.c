#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j,n;
    char str[]={"MALAYALAM"};
    int s=strlen(str);
    for(i=0;i<s;i++)
    {
        for(j=0;j<=i;j++)
        {   
            printf("%c ",str[j]);
        }
        printf("\n");
    }
}