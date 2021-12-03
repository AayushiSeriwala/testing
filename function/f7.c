//reverse a number using while loop
#include<stdio.h>
void reverse(int i){
    while(i>=1){
        printf("%d\n",i);
        i--;
    }
}
    int main()
    {
      int i=10;
      reverse(i);
    }