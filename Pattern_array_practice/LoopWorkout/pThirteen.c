#include <stdio.h>
#include<stdlib.h>

int main(void){
  int spc,i,j,k=1,num;
  float v=-5;
  printf("Enter raw count");
  scanf("%d",&num);

  for(i=1;i<=num;i++){
    for(spc=v;spc<=(num-i);spc++){
        printf(" ");
    }for(j=1;j<=i;j++){
        printf(" %d ",k++);
    }v+=0.5;
    printf("\n");
  }
  
}