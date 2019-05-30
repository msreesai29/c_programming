#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char a[10],b[10],c[10];
int p=0,l1,i=0,t=0,temp,g,s,l2,k;
clrscr();
puts("Enter First String:");
gets(a);
puts("Enter Second String:");
gets(b);
printf("Enter the position where the item has to be inserted: ");
scanf("%d",&p);
l1=strlen(a);
l2=strlen(b);
i=0;
while(i<=l1)
{
c[i]=a[i];
i++;
}
s=l2+l1;
k=p+l2;
for(i=p;i<s;i++)
{
 temp= c[i];
 if(t<l2)
 {
  a[i] = b[t];
  t=t+1;
 }
 a[k]=temp;
 k=k+1;

}
printf("%s", a);
getch();
}
