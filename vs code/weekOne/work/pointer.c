#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    
    printf("%d",**q=50);
}