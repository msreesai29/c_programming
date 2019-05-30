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
for(i=0;i<5;i++);
{
printf("%d",a[i]);
}
printf("the positive\n");
for(i=0;i<5;i++)
{
if(a[i]>0)
printf("%d",a[i]);
}
printf("negative\n");
for(i=0;i<5;i++)
{
if(a[i]<0)
printf("%d",a[i]);
}
getch();
}