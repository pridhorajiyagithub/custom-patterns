#include<stdio.h>
#include<conio.h>
/*        *********
	  *       *
	  *       *
	  * * * *
	  *       *
	  *       *
	  *********
*/
 main()
{
int i,j;

for(i=1;i<=9;i++)
{
 printf("*");
 if(i==1 || i==9)
 {
  for(j=1;j<=9;j++)
  {
   printf("*");
  }
 }
  else if(i==5)
  {
   for(j=1;j<=9;j++)
   {
    printf("*");
   }
  }

  else
  {
   printf("         *");
  }

printf("\n");
}
getch();
}
