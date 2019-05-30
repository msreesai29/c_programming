#include<stdio.h>
#include<conio.h>
void main()
/*{
char a='a',b='e',c='i',d='o',e='u',f='A',g='E',h='I',j='O',k='U',l='0';
printf("%d %d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j,k,l);
getch();
} */
{
char c;
clrscr();
printf("enter character");
scanf("%c",&c);
if(c>=65&&122<=c)
{
if(c==97||c==101||c==105||c==111||c==117||c==65||c==69||c==73||c==79||c==85)
printf("given character is vowels");
else
printf("given character is consonants");
}
if(c>=65&&c<=90)
{
printf("given characters are upper case");
}
else
{
printf("given characters are lower case");
}
getch();
}


