#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,m,n,p,q,k,sum;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter first row and column count : ");
    scanf("%d\n%d",&m,&n);
    printf("Enter second raw and coulmn count : ");
    scanf("%d \n%d",&p,&q);

    if(n!=p)
    {
        printf("Array cant multiply");
    }
    else
    {
    printf("Enter the first array values : \n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    printf("Enter second array values : \n");
    for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
                {
                    scanf("%d",&b[i][j]);
                }
        }
    printf("First array values  \n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    printf("%d \t",a[i][j]);
                }
                printf("\n");
        }
    printf("Second array values \n");
    for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
                {
                    printf("%d \t",b[i][j]);
                }
                 printf("\n");
        }

    for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
                {   
                    sum=0;
                    for(k=0;k<p;k++)
                        {
                            sum=sum+a[i][k]*b[k][j];

                        }
                        c[i][j]=sum;
                }
        }
        printf("multiplication: \n");
        for(i=0;i<m;i++)
            {
                for(j=0;j<q;j++)
                    {
                        printf("%d \t",c[i][j]);
                    }
                    printf("\n");
            }





    }

}
