#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char a[10],b[10],c[20];
int p=0,l1,i=0,t;
clrscr();
puts("Enter First String:");
gets(a);
puts("Enter Second String:");
gets(b);
printf("Enter the position where the item has to be inserted: ");
scanf("%d",&p);
for(i=0;i<p;i++)
{
c[i]=a[i];
}
t=p;
for(i=0;b[i]!='\0';i++)
{
c[p]=b[i];
p++;
}
for(i=t;a[i]!='\0';i++)
{
c[p]=a[i];
p++;
}
c[p]='\0';
puts(c);
getch();
}