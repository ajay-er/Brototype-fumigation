#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,num,p,q;
    printf("Enter the raw count");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2==0){
            p=1,q=0;
        }else{
            p=0,q=1;
        }for(j=1;j<=i;j++){
            if(j%2==0){
                printf("%d ",p);
            }else{
                printf("%d ",q);
            }
        }printf("\n");
    }
}