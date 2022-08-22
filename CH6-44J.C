#include<stdio.h>
#include<conio.h>
/*      *************
	      *
	      *
	      *
	      *
	      *
	      *
	      *
	*******
*/
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=9;i++)
{
 if(i==1)
 {
  for(j=1;j<=7;j++)
  {
   printf("**");

  }
 }
 else if(i==9)
 {
  for(j=1;j<=4;j++)
  {
    printf("**");
  }
 }
  else
  {
   printf("       *       ") ;
  }


 printf("\n");
}


 getch();
}