

#include<stdio.h>
#include<conio.h>
int main()
{
	int n=10,count=1,i;
	
    	i=n;
	while(i>=10)
	{
		i=i/10;
		count++;
	}

	printf("the no of digts in %d is %d",n,count);
getch();
return 0;
}
