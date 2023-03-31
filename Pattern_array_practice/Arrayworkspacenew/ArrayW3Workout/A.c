#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, limit;
    int arr[10];
    printf("Enter array limit:\n");
    scanf("%d", &limit);
    printf("Enter array values :\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Reverse :\n");
    for (i = limit - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}