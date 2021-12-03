//palindrome
#include<stdio.h>
void palindrome(int n){
 int r,s=0,temp=n;
   while(n!=0)
   {
       r=n%10;
       s=s*10+r;
       n=n/10;
   }
   if(temp==s)
   printf("palindrome");
    else 
    printf("not palindrome");
}
 int main()
 {
     int n;
     printf("Enter no of terms\n");
     scanf("%d",&n);
     palindrome(n);

 }



   




