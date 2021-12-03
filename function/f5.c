//reverse a given number using while loop
#include<stdio.h>
void reverse(int n)
{
 int r=0;
 while(n!=0)
 {
 
     r=r*10;
     r=r+n%10;
     n=n/10;
 }
     printf("%d",r);
 }
 int main(){
     int n;
  printf("enter a number to be reversed\n");
  scanf("%d",&n);
  reverse(n);
}