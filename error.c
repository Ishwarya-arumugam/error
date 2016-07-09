#include<stdio.h>
#include<conio.h>
void main()
{
int n,min,max;
clrscr();
scanf("%d%d%d",&n,&min,&max);
if(!(n>=min&&n<=max))
{
printf("ERROR enter valid input");
}
getch();
}
