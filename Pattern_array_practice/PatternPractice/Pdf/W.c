#include <stdio.h>

int main(void)
{
    int i,j,n=5,s,k,p=1;
    for(i=1;i<n;i++)
    {   p=1;
        for(s=i;s<=n;s++)
        {
            printf("  ");
        }
        for(k=1;k<=(2*i)-1;k++)
        {
            printf("%d ",p++);
        }
        printf("\n");
    }   j=n;
      for(i=1;i<=n;i++)
    {   p=1;
        for(s=1;s<=i;s++)
        {
            printf("  ");
        }
        for(k=1;k<=(2*j)-1;k++)
        {
            printf("%d ",p++);
        }j--;
        printf("\n");
    }
}