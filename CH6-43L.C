#include<stdio.h>
#include<conio.h>
/*      *
	*
	*
	*
	*
	*
	*
	************
*/
void main()
{
int i,j,k,n=1;
clrscr();
for(i=1;i<=8;i++)
{
if(i==8)
{
 for(j=1;j<=5;j++)
 {
  printf("**") ;
 }
}
else
{
 printf("*          ");
}
printf("\n");
}
 getch();
}