#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int STRINGLENGTH();
int STRINGCONCATENATION();
int STRINGREVERSE();

int main(void)
{   
    int num;
    printf("\n\nEnter any option\n\n");
    printf("1.STRING LENGTH\n2.STRING CONCATENATION\n3.STRING REVERSE\n4.EXIT\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1: STRINGLENGTH();
        break;
    case 2: STRINGCONCATENATION();
        break;
    case 3: STRINGREVERSE();
        break;
     case 4: exit(0);
        break;
    
    default:printf("invalid entry");
        break;
    }
    
}
int STRINGLENGTH( )
{   int i;
    char nam[10];
    printf("Enter a name: ");
    scanf("%s",nam);
    int s=strlen(nam);
    for(i=0;nam[i]!='\0';i++)
    {
        ;
    }   
    printf("String length is : %d",i);
    main();
}
int STRINGCONCATENATION()
{   
    int i,j;
    char name[10],arr[10],s3[20];
    printf("Enter first name: ");
    scanf("%s",name);
    printf("Enter last name: ");
    scanf("%s",arr);
    for(i=0;name[i]!='\0';i++);
    for(j=0;arr[j]!='\0';j++)
    {
        name[i]=arr[j];
        i++;
    }
    printf("\nconcatanation: %s",name);
        main();

}
int STRINGREVERSE()
{
    int i,j,temp;
    char name[10];
    printf("Enter a name: ");
    scanf("%s",name);
    int len=strlen(name)-1;
    int length=strlen(name);
    for(i=0;i<length/2;i++)
    {
        temp=name[i];
        name[i]=name[len];
        name[len--]=temp;
    }
    printf("reverse: %s",name); 
    main();
}
