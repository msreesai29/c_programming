#include<stdio.h>
#include<conio.h>
void main()
{
int c,a=0,b=1,n,i;
clrscr();
printf("enter the number n>2");
scanf("%d",&n);
printf("the fibanocii series is0 1 ");
for(i=1;i<=n-2;i++)
{
c=a+b;
a=b;
b=c;
printf("%d ",c);
}
getch();
}