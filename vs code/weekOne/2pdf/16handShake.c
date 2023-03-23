#include <stdio.h>

int main(void)
{
    int s,hs;
    printf("Enter total studens: ");
    scanf("%d",&s);
    hs=s*(s-1)/2;

    printf("Total handshake: %d",hs);

}