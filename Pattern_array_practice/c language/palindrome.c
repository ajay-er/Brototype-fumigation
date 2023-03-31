#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int length;
    char name[100];
    int flag=0;
    printf("enter the word:\n");
    scanf("%s",name);
    length=strlen(name);
    for(int i=0;i<length/2;i++){
        if(name[i]!=name[length-1-i]){
            flag=1;
        }
    }
    if(flag==1){
        printf("its not a palindrome");
    }else{
        printf("its palindrome");
    }
} 