//cube of any number
#include<stdio.h>
void cube(int n ,int result){
  
  result=n*n*n;
 printf("%d",result);
}
int main()
{
 int n,result;
 printf("Enter a number\n");
 scanf("%d",&n);
 cube(n,result);
}















