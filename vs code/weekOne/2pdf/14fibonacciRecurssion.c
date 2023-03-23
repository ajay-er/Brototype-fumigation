#include <stdio.h>
#include <stdlib.h>
void rec(int n)
{
    static int n1=0,n2=1,n3;
    if(n>0)
    {   
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
        rec(n-1);
    }

}
int main(void)
{   
    int i,n,n1=0,n2=1;
    printf("Enter for series numbers: ");
    scanf("%d",&n);
    printf("%d %d ",n1,n2);
    rec(n-2);
    return 0;


}