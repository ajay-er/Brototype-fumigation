#include <stdio.h>
#include <stdlib.h>

int main(void)
    {
        int i,j,limit,c;
        int arr[10],frr[10];
        printf("Enter array limit :");
        scanf("%d",&limit);
        printf("Enter array values :\n");
        for(i=0;i<limit;i++)
            {
                scanf("%d",&arr[i]);
                frr[i]=-1;

            }
        printf("Duplicate elements :\n");
        for(i=0;i<limit;i++)
            {
                c=1;
                for(j=0;j<limit;j++)
                    {
                        if(arr[i]==arr[j]&&i!=j)
                            {   
                                frr[j]=0;
                                c++;
                            }
                    }
                    if(c>1 && frr[i]!=0)
                        {
                            printf("%d ",arr[i]);
                        }

            }
    }