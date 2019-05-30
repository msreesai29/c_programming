#include<stdio.h>
#include<conio.h>
void main()
{
int a=5;
short b=10;
long c=100;
unsigned int d=6500;
unsigned short e=3200;
unsigned long f=3200;
char g='A';
unsigned char h='a';
float i=12.12;
double j=24.32;
long double k=25.1234;
clrscr();
printf("%d,%hi,%ld,%u,%hu,%lu",a,b,c,d,e,f);
printf("%c,%c",g,h);
printf("%f,%lf,%Lf",i,j,k);
getch();
}


