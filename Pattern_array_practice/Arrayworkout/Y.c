#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,sum=0,m ;
    int arr[10][10];
    printf("Enter the array limit : ");
    scanf("%d",&limit);
    printf("Enter the array values :\n");
    for(i=0;i<limit;i++)    
    {
        for(j=0;j<limit;j++)
            {
                scanf("%d",&arr[i][j]);
            }
            printf("\n");
    }
    m=limit;
    for(i=0;i<limit;i++)
        {   m=m-1;
            for(j=0;j<limit;j++)
            {
                if(j==m)
                    {
                        sum=sum+arr[i][j];
                    }
            }
        }
        printf("%d",sum);

}