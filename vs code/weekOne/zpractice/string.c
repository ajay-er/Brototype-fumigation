#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j;
    char name [30][30],p=1;
    printf("Enter 5 names: \n");
    for(i=0;i<5;i++)
    {
        scanf("%s",name[i]);
    }
    printf("Entered names: \n");
    for(i=0;i<5;i++)
    {
        printf("%d:%s\n",p++,name[i]);
    }
    
}