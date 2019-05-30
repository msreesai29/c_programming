#include<stdio.h>
#include<conio.h>
#include<math.h>
#define DAYSINWEEK 7
void main()
{
int days,weeks,years,ndays;
clrscr();
printf("total number of ndays");
scanf("%d",&ndays);
years=ndays/365;
weeks=(ndays%365)/DAYSINWEEK;
days=(ndays%365)%DAYSINWEEK;
printf("%d\n%d\n%d\n",years,weeks,days);
getch();
}