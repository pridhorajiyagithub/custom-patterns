#include<stdio.h>
#include<conio.h>
/*      **************
	*            *
	*            *
	*            *
	*            *
	*      *     *
	*      *     *
	**************
	       *
	       * * * *
*/
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=10;i++)
{
if(i<=8)
{
printf("*");
 if(i==1 || i==8)
 {
  for(j=1;j<=6;j++)
  {
   printf(" *");
  }
 }
  else if(i>=6)
  {
   printf("     *     *");
  }
  else if(i<6)
  {
   printf("           *");
  }
}
else if(i>8)
{
 printf("      *");
}

 printf("\n");
}
printf("      * * *");
 getch();
}