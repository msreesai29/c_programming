#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char string1[100],string2[100],n;
int i,length=0,j,temp;
clrscr();
printf("enter the string 1:");
gets(string1);
printf("enter the string 2:");
gets(string2);
printf("enter the cases from 1 to 7");
scanf("%d",&n);
switch(n)
{
case 1: while(string1[length]!='\0')
	{
	length++;
	}
	printf("the length of string%d\n",length);
	break;
case 2:for(i=0; string1[i]!='\0'; i++)
       length++;
       temp = length;
       for(i=0; string2[i]!='\0'; i++)
       {
       string1[temp] = string2[i];
       temp++;
       }
       string1[temp] = '\0';
       printf("\nThe concatenated string is:\n");
       puts(string1);
       break;
case 3:for(i=0; string1[i]!='\0'; i++)
       string2[i]=string1[i];
       string2[i]='\0';
       printf("\nThe value of STRING2 is:\n");
       puts(string2);
       break;
case 4:for(i=0; string1[i]!='\0'; i++)
       {
       if(string1[i] == string2[i])
       temp = 1;
       else
       temp = 0;
       }
       if(temp == 1)
       printf("Both strings are same.");
       else
       printf("Both string not same.");
       break;
case 5:length = strlen(string1)-1;
       for(i=0; string1[i]!='\0'; i++)
       {
       string2[length]=string1[i];
       length--;
       }
       string2[length]='\0';
       printf("\nThe Reverse of string is:\n");
       puts(string2);
       break;
case 6:while(string1[i]!='\0')
       {
       if(string1[i]>='A'&&string1[i]<='Z')
       {
       string1[i]=string1[i]+32;
       }
       ++i;
       }
       puts(string1) ;
       break;
case 7:while(string1[i]!='\0')
       {
       if(string1[i]>='a'&&string1[i]<='z')
       {
       string1[i]=string1[i]-32;
       }
       ++i;
       }
       puts(string1);
       break;
default:
exit(0);
}
getch();
}



