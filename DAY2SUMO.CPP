#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a[5],i,sum=0;
clrscr();
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("%d",a[i]);
sum=sum+a[i];
}
printf("sum =%d",sum);
getch();
}