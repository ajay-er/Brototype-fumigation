#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,c,c2,v=0,sum=0;
    int arr[10],prm[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values :\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
        {
            c=0;
            for(j=2;j<=arr[i]/2;j++)
                {
                    if(arr[i]%j==0)
                        {
                            c=1;
                            break;
                        }
                }
                if(c==0 && arr[i]!=1 && arr[i]!=0 &&arr[i]<7)
                    {
                        v++;
                    }
                

        }
        if(v>1)
            {
                for(i=0;i<limit;i++)
                    {
                        c2=0;
                        for(j=2;j<arr[i]/2;j++)
                            {
                                if(arr[i]%2==0)
                                    {
                                        c2=1;
                                    }
                            }
                            if(c2==0 && arr[i]>7 )
                            {
                                arr[i]=0;
                                
                            }
                    }
                    printf("After Change of prime number :\n");
                    for(i=0;i<limit;i++)
                        {
                            printf("%d ",arr[i]);
                            sum=sum+arr[i];
                        }
                        printf("\nSum of array :%d",sum);
            }
            else
            {
                printf("Second smallest prime number is greater than seven");
                printf("\n\n");
            }

}