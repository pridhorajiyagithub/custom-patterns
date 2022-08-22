#include<stdio.h>
#include<conio.h>
/*        ********
	  *      *
	  *      *
	  ********
	  *      *
	  *      *
	  *      *
*/
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=7;i++)
{ if(i==1 || i==4)
  {
   for(j=1;j<=6;j++)
   {

    printf("* ");

   }
  }
  else
  {
   printf("*         *");

  }
  printf("\n");
}


 getch();
}