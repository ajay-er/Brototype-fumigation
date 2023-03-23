    #include <stdio.h>

    int main(void)
    {
        int i,j,n,arr[10],sec=-1,lar=-1;
        printf("Enter array limit: ");
        scanf("%d",&n);
        printf("Enter array size:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        for(i=0;i<n;i++)
        {
            if(lar<arr[i])
            {
                sec=lar;
                lar=arr[i];
            }
            else if(arr[i]>sec && lar>arr[i])
            {
                sec=arr[i];
            }
        }
        printf("The second largest is :%d",sec);
    }