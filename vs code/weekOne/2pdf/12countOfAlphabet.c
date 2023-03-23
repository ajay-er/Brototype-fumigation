#include <stdio.h>

int main(void)
{
    int i,alp=0,num=0,spl=0;
    char arr[50];
    printf("Enter string: ");
    gets(arr);
    while(arr[i]!='\0')
    {
         if(arr[i]>='a'&& arr[i]<='z' || arr[i]>='A' && arr[i]<='Z')
         {
            alp++;
         }   
         else if(arr[i]>='0' && arr[i]<='9')
         {
            num++;
         }
         else
         {
            spl++;
         }
         i++;
    }
   printf( "Number of Alphabets in the string is : %d\n",alp);
   printf("Number of Digits in the string is : %d\n",num);
    printf("Number of Special characters in the string is :%d\n",spl);

}