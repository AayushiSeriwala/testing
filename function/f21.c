//armstrong or not
#include<stdio.h>
void armstrong(int n)
{
    int r,sum=0,temp=n;
    do{
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }while(n!=0 );

    if(temp==sum)
    printf("armstrong");
    else
     printf("not armstrong");
}
     int main(){
         int n;
    printf("enter a number\n");
    scanf("%d",&n);
     armstrong(n);

     }


    






