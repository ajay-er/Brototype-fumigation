#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j;
    char arr[]={"Sajay"};
    int s=strlen(arr);

    for(i=0;i<s;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",arr[j]);
        }
        printf("\n");
    }
}