//positive or negative
#include<stdio.h>
void negativeorpositive(int n)
{
   if(n>0)
   printf("positive\n");
   else
   if(n<0)
   printf("negative\n");
   else 
   printf("neither positive nor negative");
}
  int main()
  {
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    negativeorpositive(n);
  }