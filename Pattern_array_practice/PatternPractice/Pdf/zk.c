#include <stdio.h>
#include <string.h>

int main(void)
{   
    char str[]="HELLO";
    int n=strlen(str);
    int i,j,k,s;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",str[j]);
        }
        printf("\n");     
    } 
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("%c ",str[j]);
        }
        printf("\n");
    }
   
}