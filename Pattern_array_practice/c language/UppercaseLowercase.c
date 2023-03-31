#include <stdio.h>
#include <stdlib.h>

int main(void){
    char ch;
    printf("enter a alphabet ");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
    if(ch>='a'&&ch<='z'){
        printf("You entered lowercase");
    }else{
        printf("You entered uppercase");
    }
}else{
    printf("error entry");
}


}