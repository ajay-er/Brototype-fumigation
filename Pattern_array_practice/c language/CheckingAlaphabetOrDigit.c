#include <stdio.h>
#include <stdlib.h>

int main(void){
    char ch;
    printf("Enter your character \n");
    scanf("%c",&ch);
    if((ch>='a'&& ch<='z')||(ch>='a'&& ch<='z')){
        printf("it is alphabet");
    }else if (ch>='0'&& ch<='9'){
        printf("it is digit ");
    }else{
        printf("it is special character");
    }
}