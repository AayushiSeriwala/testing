//number is divisible by 11
#include<stdio.h>
int main()
{
    long int r=0,i=1,odd=0,even=0,no,n,rev=0;
    while(1)
    {
        printf("enter any number\n");
        scanf("%ld",&n);
        no=n;
        while(no!=0)
        {
            r=(no%10);
            rev=rev*10+r;
            no=(no/10);
        }
         while(rev!=0)
         {
          r=rev%10;
          if(i%2==0)
          {
            even=even+r;
          }
          else
          {
              odd=odd+r;
          }
          rev=rev/10;
          i++;
         }
         printf("Odd digit sum=%d\n",odd);
         printf("Even digit sum=%d\n",even);
         if(odd==even)
             printf("%d is divisible by11\n",n);
             else
             printf("%d is not divisible by11\n",n);

    }
}