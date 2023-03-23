#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,grade=0,written,lab,assig;
    char name[10];
      printf("Enter your name:");

    scanf("%s",name);
    printf("Enter written test mark: ");
    scanf("%d",&written);
    printf("Enter Lab mark: ");
    scanf("%d",&lab);
    printf("Enter assignment mark: ");
    scanf("%d",&assig);
     printf("\n%s\n",name);

    
     grade=((written*70)/100 + (lab*20)/100 + (assig*10)/100) ;
    
    printf("Overall grade: %d",grade);

}