#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,str,end,tp;
    printf("Enter the start range ");
    scanf("%d",&str);
    printf("Enter the end range ");
    scanf("%d",&end);
    for(i=str;i<end;i++){
        tp=0;
       for(j=2;j<=i/2;j++){
        if(i%j==0){
            tp=1;
            break;
        }
       }if(tp==0 && i!=1){
        printf("%d ",i);
       }
    }
}
    