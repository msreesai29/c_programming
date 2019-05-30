#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,fact,j;
clrscr();
printf("enter the range ");
scanf("%d",&n);
printf(" the prime numbers in the given rangeis\n",n);
for(i=0;i<=n;i++)
{
fact=0;
for(j=1;j<=n;j++)
{
if(i%j==0)
fact++;
}
if(fact==2)
printf("%d\n",i);
}
getch();
}
