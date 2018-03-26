#include<stdio.h>
void main()
{
float n;
int res;
scanf("%f",&n);
res=n+0.5;
printf("%d",res);
oid main()#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
int i,len;
scanf("%s",str);
len=strlen(str);
i=len/2;
if(len%2==0)
{
str[i]='*';
str[i-1]='*';
printf("%s",str);
}
else
{
str[i]='*';
printf("%s",str);
}
return 0;
}
{
int a;
float b;
printf("enter a number");
scanf("%f",b);
a=(n<0)?n-0.5:n+0.5;
printf("%d",a);
}
