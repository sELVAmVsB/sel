include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	a=n*i;
	printf("%d*%d=%d\n",n,i,a);
	}
getch ();
return 0;
}
