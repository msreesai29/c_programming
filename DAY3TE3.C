#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a[5],i,j,b;
clrscr();
printf("enter the array elements\n");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
for(j=i+1;j<=4;j++)
{
if(a[i]>a[j])
{
b=a[i];
a[i]=a[j];
a[j]=b;
}
}
}
printf("the elements after sorting :\n");
for(i=0;i<=4;i++)
 printf("%d ",a[i]);
 getch();
}