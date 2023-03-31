#include <stdio.h>
#include <stdlib.h>

int main(void){
    char ch;
    printf("Enter any character");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='a'&& ch<='z')){
        printf("It is Alaphabet");

    }else{
        printf("not alphabet");
    }
}