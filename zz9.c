#include <stdio.h>
#include<string.h>
void main() {
char a[1
while(i<=n)
{
printf("%s\n",a);	
i++;	
}#include <stdio.h>
#include<string.h>
int main()
{ 
    char a[100];
	int n,l,i,count=0;
	scanf("%s",a);
	scanf("%d",&l);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
	    printf("%c",a[i]);
	    count++;
	    if(l==count)
	    {
	        break;
	    }
	    
	}
	return 0;
}
	
}
