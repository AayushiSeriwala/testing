//fibnosis series using do while loop
#include<stdio.h>
void fibnosis(int n){
 int a,b,c;
 a=-1,b=1;
 do{
     c=a+b;
     printf("%d",c);
     a=b;
     b=c;
     n--;
 }while(n!=0);
  
}
int main()
{
 int n;
 printf("Enter limit\n");
 scanf("%d",&n);
 fibnosis(n);
}