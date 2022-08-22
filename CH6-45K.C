#include<stdio.h>
#include<conio.h>
/*      *       *
	*     *
	*   *
	* *
	* *
	*   *
	*     *
	*       *
*/
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{ printf("*");
  if(i<=5)
  {
  for(j=(6-i);j>=1;j--)
  {
    if(j==1)
    {
     printf(" *");
    }
    else
    {
     printf("  ");
    }
  }
  }
printf("\n");
}

for(i=1;i<=5;i++)
{ printf("*");
  if(i<=5)
  {
  for(j=i;j>=1;j--)
  {
    if(j==1)
    {
     printf(" *");
    }
    else
    {
     printf("  ");
    }
  }
  }
  printf("\n");
}

 getch();

}