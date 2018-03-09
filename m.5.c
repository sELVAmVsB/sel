
#include<stdio.h>
#include<conio.h>
int main()
{
  int array[10],number,i,num;
  
  scanf("%d",&number);

  for(i=0;i<number;i++)
  {
    scanf("%d",&array[i]);
  }
  printf("enter searching element");
  scanf("%d",&num);
  for(i=0;i<number;i++)
  {
      if(num==array[i])
      {
        printf("yes");
      }
    
  }
  getch ();
  
 return 0;
}
