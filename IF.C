#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int max_marks,m1,m2,m3,m4,m5,avg,percentage,total,n;
clrscr();
printf("enter number of subjects");
scanf("%d",&n);
max_marks=n*100;
printf("maxmark=%d\n",max_marks);
printf("enter subject marks");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
printf("total=%d\n",total);
avg=total/5;
printf("avg=%d\n",avg);
percentage=(total*100)/max_marks;
printf("percent=%d\n",percentage);
if(total>=400&&total<=max_marks)
{
printf("grade is o");
}
else if(total>=300&&total<=399)
{
printf("grade is e");
}
else if(total>=200&&total<=299)
{
printf("grade is a");
}
else
{
printf("fail");
}
getch();
}