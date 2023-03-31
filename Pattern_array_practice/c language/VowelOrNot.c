#include <stdio.h>
#include <stdlib.h>

int main (void){
    char ch;
    printf("Enter a Alphabet ");
scanf("%c",&ch);
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')){
        printf("'%c' vowel",ch);
    }else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
        printf("'&c' it is consonant");
    }else{printf("not an alphabet");}
}