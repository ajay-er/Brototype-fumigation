#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[10]    ;
    int i;
    printf("Enter a name: ");
    gets(arr);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        {   
            arr[i]=arr[i]-32;
        }
    }
    printf("Capital: %s",arr);
    return 0;
}