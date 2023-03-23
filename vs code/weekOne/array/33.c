#include <stdio.h>
int main(void)
{
    int i,j,flage=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flage=1;
            break;
        }
    }
    if(flage==0  && n!=1 && n!=0 )
    {
        printf("prime number");
    }
    else{
        printf("Not prime number");
    }
}