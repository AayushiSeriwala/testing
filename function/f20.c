//sum of all natural number using do while loop
#include<stdio.h>
void sum(int n)
{
  int i=1,s=0;
    do
    {
        if(n>0){
        s=s+i;
         i++;
        }
        else
        break;
    } while(i<=n);
     printf("%d\n",s);  

}
    int main()
    {
     int n;
     printf("enter no of terms\n");
     scanf("%d",&n);
     sum(n);
    }