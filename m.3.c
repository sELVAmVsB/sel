#include<stdio.h>
#incvlude<conio.h>
int main()
{
	int n,k,b[100],i,value=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
  if(b[i]%2!=0)
	{
		value++;
		if(value==2)
		{
			printf("%d",b[i]);
			return(0);
		}
	}
	}
  getch ();
	return(0);	
}
