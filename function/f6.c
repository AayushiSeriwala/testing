//armstrong no using while loop
#include<stdio.h>
void armstrong (int n){
    int r,sum=0,temp=n;
    while(n!=0)
    {
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
    }
    if (temp==sum)
    printf("Armstrome");
     else
     printf("Not armstrome");
}
     int main()
     {
         int n;
         printf("enter a number\n");
         scanf("%d",&n);
         armstrong(n);
     }
