//area of triangle
#include<stdio.h>
void triangle(int b,int h,float area)
{
    
area= b*h/2;
printf("%2f",area);
}
int main()
{
    int b,h,area;
  printf("enter b\n");
  scanf("%d",&b);
  printf("enter h\n");
  scanf("%d",&h);
  triangle(b,h,area);

}