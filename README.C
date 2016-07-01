#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int count=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("the count of n is %d",count);
getch();
}
