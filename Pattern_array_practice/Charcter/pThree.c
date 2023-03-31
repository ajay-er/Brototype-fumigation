#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int raw,s,print,num=5;
    int len;
    char name[]="CODER";
    len=strlen(name);
    for(raw=1,len=0;raw<=num;raw++,len++)
    {
        for(s=1;s<=raw;s++)
        {
            printf("  ");
        }
        for(print=raw;print<=num;print++)
        {
            printf("%c ",name[len]);
        }
        printf("\n");
    }
}