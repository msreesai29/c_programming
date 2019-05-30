#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[100],str2[100],l;
clrscr();
printf("enter first string:");
gets(str1);
printf("enter second string:");
gets(str2);
printf("enter the case from 1 to 6");
scanf("%d",&l);
switch(l)
{
case 1: if(strcmp(str1,str2)==0)
	printf("both the strings are equal");
	else
	printf("both the strings are not equal");
	break;
case 2: strcat(str1,str2);
	printf("string after concatenation %s\n",str1);
	break;
case 3:	printf("string length is %d",strlen(str1));
	break;
case 4: strcpy(str1,str2);
	printf("str1 %s\n",str1);
	printf("str2 %s\n",str2);
	break;
case 5: printf("upper case %s\n",strupr(str1));
	break;
case 6: printf("lower case %s\n",strlwr(str1));
	break;
default:
	exit(0);
	}
	getch();
	}

