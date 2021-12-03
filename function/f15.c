//profit or loss
#include<stdio.h>
void profitloss(int sell,int cost,int result){
  result =sell-cost;
  printf("result:%d",result);
  if(result>0)
  printf("loss");
  else
  if(result<0)
  printf("profit");
   else
   printf("no profit no loss");
}
 int main(){
   int sell,cost,result;
   printf("enter the sell price\n");
   scanf("%d",&sell);
   printf("enter the cost price\n");
   scanf("%d",&cost);
  
   profitloss(cost,sell,result);
 }
