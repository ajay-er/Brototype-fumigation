#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int i,j,k,p,s,n=5;
    char str[]="CODER";
    p=strlen(str);
    for(i=1,p=4;i<=n;i++,p--)
    {
        for(j=i;j<=n;j++)
        {
            printf("  ");

        }
        for(s=1;s<i;s++)
        {
            printf("%c ",str[p]);
        }
        for(s=1;s<=i;s++)
        {
            printf("%c ",str[p]);
        }
        printf("\n");
    }
}