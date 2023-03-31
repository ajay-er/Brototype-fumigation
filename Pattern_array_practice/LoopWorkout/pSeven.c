#include <stdio.h>
#include <stdlib.h>

int main(void){
    int j,i,num;
    printf("Enter a number ");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
       for(j=1;j<=num;j++){
    printf("%dx%d=%d ",j,i,(i*num));
       }printf("\n");
      
    }
}