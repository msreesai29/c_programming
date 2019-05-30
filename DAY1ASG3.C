#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int amt,note100,note50,note20,note10,note5,note2,note1;
printf("enter total amt");
scanf("%d",&amt);
note100=(int)amt/100;
printf("no of 100 notes=%d",note100);
note50=(int)amt/50;
printf("number of 50 notes=%d",note50);
note20=(int)amt/20;
printf("number of 20 notes=%d",note20);
note10=(int)amt/10;
printf("number of 10 notes=%d",note10);
note5=(int)amt/5;
printf("number of 5 notes=%d",note5);
note2=(int)amt/2;
printf("number of 2 notes=%d",note2);
note1=(int)amt/1;
printf("number of 1 note=%d",note1);
getch();
}
