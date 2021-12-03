//print multiplication table using for loop
#include<stdio.h>
 void table(int num){
     int i;
      for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",num,i,num*i);
      }
 }
      int main()
      { 
          int num;
          printf("Enter a number to print table\n");
          scanf("%d",&num);
          table(num);
      }



      
