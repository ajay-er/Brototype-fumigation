#include<stdio.h>
//Calculate array size
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
void findDuplicateElement(int arr[], const int size)
{
    int i, j,k;
    int tmpArr[size],tmpArrIndex = 0;
    printf("Repeating elements are ");
    for(i = 0; i < size; i++)
    {
        int flag = 0;
        for(j = i+1; j < size; j++)
        {
            if((i != j) && (arr[i] == arr[j]))
            {
                for(k = 0; k < tmpArrIndex; k++)
                {
                    if(tmpArr[k] == arr[j])
                    {
                        //It is not a newly repeated element
                        flag = 1;
                    }
                }
                if(flag != 1)
                {
                    //newly repeated element
                    tmpArr[tmpArrIndex++] = arr[j];
                }
            }
        }
    }
    //print duplicate element
    for(i = 0; i < tmpArrIndex; i++)
    {
        printf("%d ",tmpArr[i]);
    }
}
int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1,4,4,4,4,1,2,34,4,4,4,4,4,4};
    const int N = ARRAY_SIZE(arr);
    findDuplicateElement(arr, N);
    return 0;
}