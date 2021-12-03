//even or odd program 
#include<stdio.h>
 void even(int n)
 {
   if(n%2==0)
   printf("even");
      else
      printf("odd");
 }
   int main()
   {
    int n;
    printf("enter a number \n");
    scanf("%d",&n);
     even(n);



   }

