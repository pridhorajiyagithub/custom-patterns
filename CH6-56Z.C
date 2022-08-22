#include<stdio.h>
#include<conio.h>
/*
  ***********
	   *
	  *
	 *
	*
       *
      *
     *
    *
   ***********
*/
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=10;i++)
{
  if(i==1 || i==10)
  {
   for(j=1;j<=10;j++)
   {
    printf("*");
   }
  }
  else
  {
   for(j=11-i;j>=1;j--)
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


  }
  printf("\n");
}
 getch();
}