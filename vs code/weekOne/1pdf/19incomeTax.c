#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,tax=0,annul;
    printf("Enter the annual income: ");
    scanf("%d",&annul);
    if(annul<=250000 && annul>=0)
    {
        printf("no need to pay taxes");
    }
    else if(annul>=250000 && annul <500000)
    {
        tax=annul*5/100;
        printf("Tax needed to pay: %d",tax);
    }
     else if(annul<1000000 && annul >=500000)
    {
        tax=annul*20/100;
        printf("Tax needed to pay: %d",tax);
    }
    else if(annul>=1000000 && annul <=5000000)
    {
        tax=annul*30/100;
        printf("Tax needed to pay: %d",tax);
    }
}