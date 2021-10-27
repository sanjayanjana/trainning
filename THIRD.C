#include<stdio.h>
void main()
{
int i=10;
printf("enter the value");
scanf("%d",&i);
if(i<10)
{
printf("motor on");
}if(i>10)
printf("motor off");
getch();
}