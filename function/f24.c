//gross salary of employee
#include<stdio.h>
void grosssalary(int bs,int gs){
    int da,ta;
    da=(10*bs/100);
    ta=(12*bs/100);
    gs=bs+da+ta;
    printf("gross salary=%d",gs);
}
int main()
{
  int bs,gs;
  printf("Enter basic salary");
  scanf("%d",&bs);
  grosssalary(bs,gs);



}

