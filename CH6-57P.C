#include<stdio.h>
#include<conio.h>
/*      ***********
	*         *
	*         *
	*         *
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
{
printf("*");
 if(i==1)
 {
  for(j=1;j<=5;j++)
  {
   printf("**");
  }
  }
  else if(i==5)
  {
   for(j=1;j<=5;j++)
   {
    printf("**");
   }
  }
  else if(i<=4)
  {
   printf("         *");
  }

 printf("\n");
}

 getch();
}