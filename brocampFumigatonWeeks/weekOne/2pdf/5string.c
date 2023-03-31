#include <stdio.h>

int main(void)
{
    int i,j;
    char nam[10],arr[10];
    printf("Enter a string: ");
    scanf("%s",nam);
    for(i=0;nam[i]!='\0';i++)
    {
        arr[i]=nam[i];
    }
    arr[i]='\0';
    printf("copied string: %s",arr);
    return 0;
}