//find radius circumference and volume of cylinder
#include<stdio.h>
int main()
{
    float radius,height;
    char quit;
    int choice;
    float pi=3.14;
    float areaofcircle,circumferenceofcircle,volumeofcylinder;
    
    do{
        printf("what do you want to calculate?\n");
        printf("1.For Area of circle\n");
        printf("2.For Circumference of circle\n");
        printf("3.For volume of circle\n");
        printf("4.For Quit\n");
        switch(choice)
        {
         case 1:
         printf("Enter radius of circle\n");
         scanf("%f",&radius);
          areaofcircle=2*pi*radius*radius;
          printf("area of circle=%f",areaofcircle);
          break;
         case 2:
         printf("Enter circumference of circle\n");
        
          circumferenceofcircle=2*pi*radius;

          printf("Circumference of circle=%f",circumferenceofcircle);
          break;
          case 3:
           printf("Enter radius of circle\n");
           scanf("%f",&radius);
           printf("Enter height of circle\n");
           scanf("%d",&height);
          volumeofcylinder=radius*radius*pi*height;
          printf("volume of cylinder=%f",volumeofcylinder);
          break;
           case 0:
           quit='y';
           break;
           default:
           printf("Wrong choice...Try Again\n");
           break;
        }
        
        }while(quit!='y');
    }
