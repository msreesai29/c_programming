#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,l,rem,rem1,rem2,rem3,rem4,rem5,rem6,a,b,os=0,es=0,dif,sum;
clrscr();
printf("enter value");
scanf("%d",&n);
printf("enter cases 2 to 11");
scanf("%d",&l);
switch(l)
{
case 2: if(n%2==0)
	 printf("number is divisibe by 2");
	 else
	 printf("not divisible by 2");
	 break;
case 3: while(n!=0)
	{
	rem=n%10;
	sum=sum+rem;
	n=n/10;
	}
	if(sum%3==0)
	printf("enter divisible by 3");
	else
	printf("not diviosible by 3");
	break;
case 4: rem1=n%100;
	if(rem1%4==0)
	printf("divisible by 4");
	else
	printf("not divisible by 4");
	break;
case 5: rem2=n%10;
	if(rem2%5==0||rem2%5==5)
	printf("divisible by 5");
	else
	printf("not divisible by 5");
	break;
case 6: while(n!=0)
	{
	rem3=n%10;
	sum=sum+rem3;
	n=n/10;
	}
	if(rem3%2==0&&sum%3==0)
	printf("divisible by 6");
	else
	printf("not divisible by 6");
	break;
case 7: if(n%7==0)
	printf("divisible by 7");
	else
	printf("not divisible by 7");
	break;
case 8: rem4=n%1000;
	if(rem4%8==0)
	printf("divisible by 8");
	else
	printf("not divisible by 8");
	break;
case 9: while(n!=0)
	{
	rem5=n%10;
	sum=sum+rem5;
	n=n/10;
	}
	if(sum%9==0)
	printf("divisible by 9");
	else
	printf("not divisible by 9");
	break;
case 10: rem6=n%10;
	 if(rem6==0)
	 printf("divisible by 10");
	 else
	 printf("not divisible by 10");
	 break;
case 11: a=n;
	 b=n/10;
	 while(a>0)
	 {
	 os=os+(a%10);
	 a=a/100;
	 }
	 while(b>0)
	 {
	 es=es+(b%10);
	 b=b/100;
	 }
	 dif=abs(es-os);
	 if(dif%11==0||dif==0)
	 printf("divisible by 11");
	 else
	 printf("not divisible by 11");
	 break;
  default:
  exit(0);
  }
  getch();
  }
