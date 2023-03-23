#include <stdio.h>
int main()
{
   int a[100]={1,2,1,4,5,4};
   int n=6,count,i,j,p=-1;
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          if(i!=j){
              if(a[i]==a[j]){
               a[i]=p;
               a[j]=p;
              }
          }
      }
      if(a[i]==p){
          for(j=i;j<n;j++){
              a[j]=a[j+1];
          }
         n--;
         i--; 
      }
  }
for(i=0;i<n;i++)
{
    printf("%d ",);
}

    return 0;
}
