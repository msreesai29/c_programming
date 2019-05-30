#include <stdio.h>
#include<conio.h>
int main()
 {
char id[10];
int hour;
double value, salary;
clrscr();
printf("Input the Employees ID(Max. 10 chars): ");
scanf("%s", &id);
printf("\nInput the working hrs: ");
scanf("%d", &hour);
printf("\nSalary amount/hr: ");
scanf("%lf", &value);
salary = value * hour;
printf("\nEmployees ID = %s\nSalary = U$ %.2lf\n", id,salary);
getch();
return 0;
}