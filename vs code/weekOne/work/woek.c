#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j,n=5;
    char arr[10][10];
    for(i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",arr[i]);
    }
}