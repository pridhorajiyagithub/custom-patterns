#include<stdio.h>
#include<conio.h>
/*      *               *
	* *           * *
	*   *       *   *
	*     *   *     *
	*       *       *
	*               *
	*               *
	*               *
*/
void main()
{
int p,i,j,k,l,m;
clrscr();
for(j=1;j<=8;j++)
{
  printf("* ");
  if(j<=5)
  {
  for(k=1;k<j;k++)
  {
   printf("  ");
  }

  for(l=1;l<=6-j;l++)
  {
  if(l==1)
  {
   printf("*");
  }
  }

  for(k=1*2;k<=(6-j)*2;k++)
  {
  printf("  ");
  }

  for(l=1;l<=j;l++)
  {
   if(l==1 || l==j)
   {
    printf(" *");
   }
    else
    {
     printf("  ");
    }

  }



}
else if(j==6)
{
 printf("          *         *");
}
else
{
 printf("                    *");
}

printf("\n");

}

 getch();
}