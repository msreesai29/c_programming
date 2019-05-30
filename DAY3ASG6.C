/*      *
	**
	***     */
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("the pattern range:\n");
scanf("%d",&n);
for(i=0;i<5;i++)
{
for(j=0;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}