//program to add two pointers
#include<stdio.h>
int main()
{
  int a,b,c;
  int *p, *q, *r;
   p=&a;
   q=&b;
   r=&c;
   printf("Enter two no\n");
   scanf("%d%d",p,q);
   *r=*p+*q;
   printf("%d",*r);
}