#include<stdio.h>
int main(void)
{
int i,j;
int n=5;
for(i=1;i<n*2;i++)
{
for(j=1;j<=n;j++)
{
if(j>=i)
{
printf("%d ",n+1-i);
}
else if( j>=(n*2)-i)
{
printf("%d ",n+1-((n*2)-i));
}
else
{
printf("%d ",n+1-j);
}
}
for(j=2;j<=n;j++)
{
if(j<=n+1-i)
{
printf("%d ",n+1-i);
}
else if( j<=i-n+1)
{
printf("%d ",n+1-((n*2)-i));
}
else
{
printf("%d ",j);
}
}
printf("\n");
}
}