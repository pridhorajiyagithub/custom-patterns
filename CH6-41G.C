#include<stdio.h>
#include<conio.h>
/*      * * * * * *
	*
	*
	*     * * *
	*         *
	*         *
	* * * * * *
*/
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=7;i++)
{
 printf("*");
  if(i==1 || i==7 )
  {
   for(j=1;j<=6;j++)
   {
     printf(" *");
   }
  }
  else if(i==4)
  {
    for(j=1;j<=3;j++)
    {
     printf("  ");
    }
    for(j=3;j<6;j++)
    {
    printf(" *");
    }

  }
  else if(j==5 || j==6)
  {
   printf("           *");
  }



  printf("\n");
}


 getch();
}