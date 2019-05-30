#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,temp;
char a[9];
clrscr();
printf("enter the character of given string\n");
for(i=0;i<=8;i++)
{
scanf("%c",&a[i]);
}
j=i-1;
i=0;
while(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}
for(i=0;i<=8;i++)
printf("%c",a[i]) ;
getch();
}