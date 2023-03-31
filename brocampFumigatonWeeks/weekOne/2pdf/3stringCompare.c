#include<stdio.h>
#include <string.h>

int main(void)
{   
    int i,j,n1,n2,c;
    char arr[10],arr1[10];
    printf("Enter a string: ");
    scanf("%s",arr);
    printf("Enter second array: ");
    scanf("%s",arr1);
    n1=strlen(arr);
    n2=strlen(arr1);
    if(n1==n2)
    {
    for(i=0;i<n1;i++)
    {   c=0;
        if(arr[i]!=arr1[i])
        {   
            c=1;
            break;
        }
    }
    }
    if(c==0)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }
}