//grestest among three numbers
#include<stdio.h>
void greater(int a,int b,int c){
   if(a>=b)
   {
      if(a>=c)
        printf("%d is largest no",a);
        else 
        printf("%d is largest no",c);
   }
   else{
   if(b>=c)
     printf("%d is largest no",b);
     else
     printf("%d is largest no",c);
   }
}
   int main()
   {
     int a,b,c;
     printf("enter three numbers\n");
     scanf("%d%d%d",&a,&b,&c);
     greater(a,b,c);

   }
