/*      ***
	**
	*         */
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("the pattern size:\n");
scanf("%d",&n);
for(i=n;i>0;i--)
{
for(j=i;j>0;j--)
{
printf("*");
}
printf("\n");
}
getch();
}