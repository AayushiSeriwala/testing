//palindrome using do while loop
#include<stdio.h>
 void palindrome(int n)
 {
     int r,s=0,temp=n;
do
{
    r=n%10;
    s=s*10+r;
    n=n/10;
}while(n!=0);
  if(temp==s)
   printf("palindrome");
   else
   printf("not palindrome");
 }
 int main()
 {
     int n;
    printf("Enter a number\n");
    scanf("%d",&n) ;
    palindrome(n);
 }