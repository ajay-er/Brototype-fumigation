#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[10],i,length=0,c=0;
    printf("Enter a string\n");
    scanf("%s",arr);
    length=strlen(arr);
    for(i=0;i<length;i++)
    {
        if(arr[i]!=arr[length-i-1])
        {
            c=1;
            break;
        }
    }
    if(c==1)
    printf("Not palindrome");
    else
    printf("palindrome");
}