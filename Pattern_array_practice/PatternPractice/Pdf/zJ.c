#include <stdio.h>
#include <string.h>

int main(void)
{   
    char str[]="computer";
    int n=strlen(str);

    int i,j,s,k;
    for(i=0;i<n;i++)
    {   
        for(j=0;j<=i;j++)
        {
            printf("%c ",str[j]);
        }
        printf("\n");
    }
}