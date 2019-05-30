#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int arr[50], i, Size;
int first,second,last,K,L;
clrscr();
printf("\n Please Enter the Number of elements in an array  :  ");
scanf("%d", &Size);
printf("\n Please Enter %d elements of an Array \n", Size);
for (i = 0; i < Size; i++)
{
scanf("%d", &arr[i]);
}
first = L;
for(i=0;i<Size;i++)
{
if(arr[i] > first)
{
second=first;
first = arr[i];
}
}
printf("\n The Largest Number in this Array =  %d", first);
last=K;
for(i=0;i<Size;i++)
{
if(arr[i]<last)
{
second=last;
last=arr[i];
}
}
printf("\n the lowest in this array is =%d",last);
getch();
}