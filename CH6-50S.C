#include<stdio.h>
#include<conio.h>
/*      ***********
	*
	*
	*
	***********
		  *
		  *
		  *
	***********


*/
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
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

 printf("\n");
}
for(i=1;i<=4;i++)
{
 if(i==4)
 {
  for(j=1;j<=11;j++)
  {
    printf("*");
  }
  }
  else
  {
   printf("          *");
  }

 printf("\n");
}

 getch();
}