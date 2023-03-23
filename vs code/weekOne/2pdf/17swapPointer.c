#include <stdio.h>
int swap(int *x,int *p)
{   
    int t;
    t=*x;
    *x=*p;
    *p=t;
}
int main(void)
{   
    int n1,n2;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    swap(&n1,&n2);
    printf("After swap first number : %d\n",n1);
    printf("After swap second number :%d",n2);
}