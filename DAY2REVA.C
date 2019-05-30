#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a[5],i;
clrscr();
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("print before reverse");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
printf("elements after reverse");
for(i=5;i>=0;i--)
{
printf("%d",a[i]);
}
getch();
}
