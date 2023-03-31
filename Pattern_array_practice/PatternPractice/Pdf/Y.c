#include <stdio.h>

int main(void)

{
    int i,j,n=7,s,k,c=0,p=65;
    for(i=1;i<=n;i++)
    {   p=65;
        for(j=n;j>=i;j--)
        {   
            printf("%c",p);
            p++;
            c++;
        }
        for(s=2;s<(2*i);s++)
        {
            printf(" ");
        }
        p=p-1;
        for(k=i;k<=n;k++)
        {   
            printf("%c",p);
            p--;
            
        }  
        printf("\n");
    }
}