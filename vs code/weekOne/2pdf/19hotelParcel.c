#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float wgt,s=0,n=.5;
    int t=170,w=200;
    printf("Enter the weight in k.g: ");
    scanf("%f",&wgt);
     
    if(wgt<=n)
    {
        printf("parcel charge is 200 rs");
    }
    else if(s=(wgt-n)/n)
    {
        s=s*t;
        printf("parcel charge is: %f rs",s+w);
    }
}