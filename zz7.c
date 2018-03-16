#include<stdio.h>
#include<bfhd.b>
int main(void)
{
int n,a=0,b=1,i,j,count;
scanf("%d",&n);
printf("%d",b);
coount=1;
while(count<n)
{
i=a+b;
count++;
printf("\n %d",i);
a=b;
b=i;
}
}
