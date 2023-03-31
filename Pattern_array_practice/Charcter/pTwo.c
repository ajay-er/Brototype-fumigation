#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    int i,j,p,k,n=6;
char s[]="DOCTER";
p=strlen(s);

for(i=1,p=0;i<=n;i++,p++)
{
    for(j=1;j<=i;j++)
    {
        printf("%c ",s[p]);
    }

    printf("\n");
}


}