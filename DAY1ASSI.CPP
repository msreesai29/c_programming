#include<stdio.h>
#include<conio.h>
void main()
{
int r,r1,area,perimeter;
float p=3.14;
printf("enter the values of r for area");
scanf("%d",&r);
printf("enter the value of r1 for perimeter");
scanf("%d",&r1);
area=p*r*r;
perimeter=2*p*r;
printf("area=%d\nperimeter=%d\n",area,perimeter);
getch();
}
