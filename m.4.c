
#include <stdio.h>
#include<conio.h>
int main() 
{
	int n,k,i,a[10],count=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	        count++;
	    }
	}
	if(count!=0)
	{
	   printf("%d is repeated %d times",k,count);
	}
	if(count==0)
	{
	   printf("%d is not present",k);
	 }
	return 0;
  getch0;
}
