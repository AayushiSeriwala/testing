//factorial of number
#include<stdio.h>
void factorial(int n){
int f=1,i;
for(i=1;i<=n;i++)
//while(n!=0){
    f=f*i;
   // n--;


 printf("%d",f);

}
int main()
{
int n;
printf("enter a number\n");
scanf("%d",&n);
factorial(n);
}