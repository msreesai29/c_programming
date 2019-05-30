#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
float sum=0,avg;
clrscr();
printf("enter 1st n natural numbers ");
scanf("%d",&n);
printf("%d",n);
for(i=0;i<=n;i++)
sum=sum+i;
avg=sum/n;
printf("%d",avg);
getch();
}
