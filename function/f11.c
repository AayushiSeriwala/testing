//leap year or not
#include<stdio.h>
void leap (int num)
{
  
  if(num%4==0)
   printf("%d is a leap year",num);
   else
   printf("%d is not a leap year",num);
}
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    leap(num);
}