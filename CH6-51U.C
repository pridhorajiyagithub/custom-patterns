#include<stdio.h>
#include<conio.h>
/*
	*         *
	*         *
	*         *
	*         *
	*         *
	*         *
	*         *
	***********


*/
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=8;i++)
{
printf("*");
 if(i==8)
 {
  for(j=1;j<=6;j++)
  {
   printf("**");
  }
 }
  else
  {
   printf("           *");
  }
 printf("\n");
}

 getch();
}