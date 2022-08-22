#include<stdio.h>
#include<conio.h>
// t
main()
{
int i,j;
clrscr();


for(i=1;i<=6;i++)
{
 if(i==1)
  {
   for(j=1;j<=5;j++)
   {
    printf("* ");
   }
  }
  else
  {
   printf("    *    ");
  }


 printf("\n");
}
    getch();
}
