
 #include<stdio.h>
 #include<conio.h>
int main()
{
int n,i,s=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s*i;
}
printf("\nfactorial of is=%d",s);
getch ();
return 0;
}
