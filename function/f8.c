//sum of all natural number
#include<stdio.h>
void natural(int n){
  int i=1,sum=0;
    if(n>0){
   while(i<=n){
       sum=sum+i;
       i++;
   }
printf("%d",sum);
    }
}
    int main()
    {
  int n;
  printf("Enter a no of term\n");
  scanf("%d",&n);
    natural(n);
    }
