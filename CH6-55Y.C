#include<stdio.h>
#include<conio.h>
/*
     *           *
      *         *
       *       *
	*     *
	 *   *
	  * *
	   *

*/
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{


  for(j=i;j>=1;j--)
  {
   if(j==1)
   {
    printf("*");
   }
   else
   {
    printf(" ");
   }
  }

  for(j=(6-i)*2;j>1*2;j--)
  {
     printf(" ");
  }

  for(j=1;j<=i;j++)
  {
   if(j==1)
   {
     printf("*");
   }
   else
   {
    printf(" ");
   }
  }

 printf("\n");
}

for(i=1;i<=4;i++)
{


  for(j=6-i;j>=1;j--)
  {
   if(j==1)
   {
    printf("*");
   }
   else
   {
    printf(" ");
   }
  }

/*  for(j=1*2;j<i*2;j++)
  {
     printf(" ");
  }

  for(j=1;j<=i;j++)
  {
   if(j==1)
   {
     printf("*");
   }
   else
   {
    printf(" ");
   }
  }
  */
 printf("\n");
}


 getch();
}