#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[4],j,i,sum=0;
clrscr();
printf("enter the  characters\n");
for(i=0;i<=3;i++)
{
scanf("%c",&a[i]);
}
for(i=0;i<=3;i++)
{
printf("%c",a[i]);
}
for(i=0;i<=3;i++)
{
for(j=i;j<=3;j++)
{
sum=a[i]+2;
a[i]=a[j];
a[j]=sum;
}
}
printf("%c",a[i]);
getch();
}
