#include<stdio.h>
#include<conio.h>
void main()
{
int year;
scanf("%d",&year);
if(year%4==0)
{
printf("leap year");
}
else
printf("not a leap year");
getch ();
return 0;
}
