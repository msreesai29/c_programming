#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter values of a and b");
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=b^a;
printf("after swap %d %d",a,b);
getch();
}
