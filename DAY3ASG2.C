/*      ***
	 **
	  *       */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter no of rows:\n");
scanf("%d",&n);
for(i=n;i>0;i--)
{
for(j=n;j>i;j--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}
