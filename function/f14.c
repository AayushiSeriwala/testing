//calculate simple interest
#include<stdio.h>
void simpleinterest(float p,float r,float t,float si){
  si=p*r*t/100;
  printf("%.2f",si);
}
int main()
{
    float p,r,t,si;
  printf("enter the principal\n");
  scanf("%f",&p);
  printf("enter the rate\n");
  scanf("%f",&r);
  printf("enter the time\n");
  scanf("%f",&t);
  simpleinterest(p,r,t,si);
}


