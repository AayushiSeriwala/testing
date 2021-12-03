//calculator using switch case
#include<stdio.h>
int main()
{
   int a,b,result;
   char op;
   printf("Enter an expression\n");
   scanf("%d%c%d",&a,&op,&b);
   switch(op)
   {
       case '+':
       result=a+b;
       break;
       case '-':
       result=a-b;
       break;
       case '*':
       result=a*b;
       case '/':
       result=a/b;
       break;
   }
    printf("Result=%d",result);
}
