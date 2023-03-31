#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int raw,col,spc,p,temp;
    int num=5;
    char new[]="ABCDE";
    temp=strlen(new);
    
    for(raw=1;raw<=num;raw++)
    {   
        temp=0;
        
       /* for(spc=1;spc<=raw;spc++)
        {
            printf("  ");
        }*/
       
        for(col=1;col<=raw;col++)
        {
            printf("%c ",new[temp++]);
        }
        
        printf("\n");
    }
}