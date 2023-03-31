#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int raw,col,spc,p,temp;
    int num=8;

    char new[100];
    printf("Enter a name");
    scanf("%s",new);

    temp=strlen(new);

    for(raw=1,p=0;raw<=num;raw++,p++)
    {
        
        for(spc=1;spc<=raw;spc++)
        {
            printf("  ");
        }
        for(col=raw;col<=num;col++)
        {
            printf("%c ",new[p]);
        }
        printf("\n");
    }




}