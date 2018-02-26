#include<stdio.h>
#include<conio.h>
lower=int(input())
upper=int(input())
for num in range(lower,upper+1):
	if (num>1) :
		for i in range(2,num):
			if(num%i==0):
				break
		else:
			print(num)
      getch();
      return0;
      }
