#include<stdio.h>
#include<conio.h>
 void main()
{
int  n;
printf(“enter the value=”);
scanf(“%d”,&n);
if(n%4==0||n%400==0||n%100==0)
printf(“is a leap year”);
else
printf(”is not a leap year”);
}
