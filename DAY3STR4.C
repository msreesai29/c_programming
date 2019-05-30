#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,s;
clrscr();
printf("enter the range *");
scanf("%d",&n);
s=n;
for(i=1;i<=n;i++)
{
for(j=1;j<s;j++)
printf(" ");
s--;
for(j=1;j<=2*n-1;j++)
printf("*");
}
printf("\n");
getch();
}