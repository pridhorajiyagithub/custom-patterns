#include<stdio.h>
#include<conio.h>
/*      *             *
	* *           *
	*   *         *
	*     *       *
	*       *     *
	*         *   *
	*           * *
	*             *
*/
void main()
{
int p,i,j,k,l,m;
clrscr();
for(j=1;j<=8;j++)
{
  printf("* ");
if(j<9)
{
 for(k=j;k>1;k--)
 {
   if(k==2)
   {
     printf("* ");
   }
   else
   {
    printf("  ");
   }
 }

 for(i=8-j;i>=1;i--)
 {
 if(i==1)
 {
  printf("* ");
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