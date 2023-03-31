#include <stdio.h>

void cls(int c)
{
    if(c<=8)
    {
        printf("crossRoads\n");
        cls(c+1);
    }
}
int main()
{
    int i=1;
    cls(i);
}