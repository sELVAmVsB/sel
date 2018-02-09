#include <stdio.h>

int main(void) 
{
int i,j,n,k,sum=0;
printf("Enter n and k value:");
scanf("%d,%d",&n,&k);
for(i=0;i<n;i++)
{
printf("%d\t",i);
}
for(j=0;j<k;j++)
{
sum=sum+j;
}
printf("%d",sum);
return 0;
