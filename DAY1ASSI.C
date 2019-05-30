#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,area,perimeter;
clrscr();
printf("enter the values of l and b for area");
scanf("%d%d",&l,&b);
area=l*b;
perimeter=2*(l+b);
printf("area=%d\nperimeter=%d\n",area,perimeter);
getch();
}
