#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, limit;
    int arr[10];
    int lrg = -1, sec = -1;

    printf("Enter array limit : ");
    scanf("%d", &limit);
    printf("Enter array values \n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < limit; i++)
    {
        if (arr[i] > lrg)
        {
            sec = lrg;
            lrg = arr[i];
        }
        else if (arr[i] > sec && arr[i] != lrg)
        {
            sec = arr[i];
        }
    }
    printf("Largest : %d \n", lrg);
    if (sec != -1)
    {
        printf("Second largest : %d", sec);
    }
    else
    {
        printf("No sec largest numbers");
    }
}