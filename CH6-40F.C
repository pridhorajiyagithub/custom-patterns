#include<stdio.h>
#include<conio.h>
/*      ***********
	*
	*
	***********
	*
	*
	*
*/
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=9;i++)
{ if(i==1 )
  {
   for(j=1;j<=5;j++)
   {

    printf("**");

   }
  }

   if(i==5)
   {
    for(j=1;j<=11;j++)
   {

    printf("*");

   }
   }
     else
  {
   printf("*         ");
  }
  printf("\n");
}


 getch();
}