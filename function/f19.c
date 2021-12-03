//reverse a given number using do while
#include<stdio.h>
void reverse(int i)
{
    do{
    printf("%d\n",i);
    i--;
    }while(i>=1);
}
    int main()
    {
   int i=10;
    reverse(i);
    }