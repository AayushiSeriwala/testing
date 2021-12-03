//temperature into celsius using switch case
#include<stdio.h>
int main()
{
    float a,b, centigrade,fahrenheit;
    int x;
    printf("1.for fahrenheit to celsius\n");
    printf("2.for celsius to faharenheit\n");
    printf("Enter your choice\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Enter the value of faharenheit temperature\n");
        scanf("%f",&a);
        centigrade=5*(a-32)/9;
        printf("Celsius temperature:%f\n",centigrade);
        break;
        case 2:
        printf("Enter the value of celsius temperature\n");
        scanf("%f",&b);
        fahrenheit =(9*b/5)+32;
        printf("Fahrenheit temperature%f",fahrenheit);
        break;
        default:
        printf("wrong choice try again");
    }
}

