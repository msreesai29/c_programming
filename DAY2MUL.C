#include<stdio.h>
#include<conio.h>
void main()
{
int n,l,i,k;
clrscr();
printf("enter range \n");
scanf("%d",&n);
printf("enter the limit\n");
scanf("%d",&l);
printf("the table is\n");
for(i=1;i<=n;i++)
{
k=i*l;
printf("\n%d *%d =%d\n",i,l,k);
}
getch();
}