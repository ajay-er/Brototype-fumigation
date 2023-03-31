#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,s1,s2,s3,k=0,j,temp;
    int arr[10];
    int arr1[10];
    int merge[40];
    printf("Enter your array limit :");
    scanf("%d",&s1);
    printf("Enter array values \n");
    for(i=0;i<s1;i++)
        {
              scanf("%d",&arr[i]);
        }

    printf("Enter second array limit");
    scanf("%d",&s2);
       for(i=0;i<s2;i++)
        {
              scanf("%d",&arr1[i]);
        }

    s3=s1+s2;
    for(i=0;i<s1;i++)
        {
            merge[k]=arr[i];
            k++;
        }
    for(j=0;j<s2;j++)
        {
            merge[k]=arr1[j];
            k++;
        }
    for(i=0;i<s3;i++)
        {
            for(j=i+1;j<s3;j++)
            {
                if(merge[i]<merge[j])
                {
                    temp=merge[i];
                    merge[i]=merge[j];
                    merge[j]=temp;

                }
            }
        }

        for(i=0;i<s3;i++)
            {
                printf("%d ",merge[i]);
            }
        
    





   }