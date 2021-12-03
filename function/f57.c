//convert temperature celsius into farhenheit
#include<stdio.h>
void  temperaturecelsius (float celsius,float fahreneit){
    fahreneit=(celsius*9/5)+32;
    printf("%f celsius=%f fahreneit",celsius,fahreneit);
}
int main(){
   float celsius,fahrenheit;
   printf("Enter temperature in celsius\n");
   scanf("%f",&celsius);
   temperaturecelsius(celsius,fahrenheit);
}