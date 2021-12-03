//fibnocii series 
#include<stdio.h>
void fibnocii(int n)
{
    int a=-1,b=1,c;
    while(n!=0){
     c=a+b;
     printf("%d",c);
     a=b;
     b=c;
     n--;
    }
}
int main()
{
    int n;
   printf("Enter the no of limit\n");
   scanf("%d",&n);
   fibnocii(n);

}



