
#include <stdio.h>

int main(void) 

{

int start,end,i=0;

printf("enter the  starting number");


printf("enter the ending number");

scanf("%d",&end);

for(i=start;i<=end;i++)

{

if(i%2!=0)

{

printf("%d",i);

}

}

return 0;

}
