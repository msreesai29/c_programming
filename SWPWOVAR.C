#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter a,b values");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap %d %d",a,b);
getch();
}
