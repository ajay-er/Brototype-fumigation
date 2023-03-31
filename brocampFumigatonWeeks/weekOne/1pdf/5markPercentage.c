#include<stdio.h>
#include <stdlib.h>

int main(void)
{  
      float mark;
      printf("Enter Total mark :  ");
      scanf("%f",&mark);
      if(mark>=90 && mark<=100)
      {
        printf("A grade");
      }
      else if(mark>=80 && mark<=89)
      {
        printf("B grade");
      }
      else if(mark>=70 && mark<=79)
      {
        printf("C grade");
      }
      else if (mark>=60 && mark<=69)
      {
        printf("D grade");
      }
      else if(mark>=50 && mark<=59)
      {
        printf("E grade");
      }
      else if(mark<=50 && mark >=0)
      {
        printf("Failed");
      }
      else
      {
        printf("Wrong entry");
      }

    
}