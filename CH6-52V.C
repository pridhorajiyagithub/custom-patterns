#include<stdio.h>
#include<conio.h>
/*
     *           *
      *         *
       *       *
	*     *
	 *   *
	  * *
	   *

*/
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=7;i++)
{


  for(j=i;j>=1;j--)
  {
   if(j==1)
   {
    printf("*");
   }
   else
   {
    printf(" ");
   }
  }

  for(j=(8-i)*2;j>1*2;j--)
  {
     printf(" ");
  }

  for(j=1;j<=i;j++)
  {
   if(j==1)
   {
     printf("*");
   }
   else
   {
    printf(" ");
   }
  }

 printf("\n");
}

 getch();
}