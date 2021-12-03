//display the size of different data type
#include<stdio.h>
void size(int inttype,float floattype,double doubletype,char chartype){
   printf("int is %d bytes\n",sizeof(inttype));
   printf("float is %d bytes\n",sizeof(floattype));
   printf("double is %d bytes\n",sizeof(doubletype));
    printf("char is %d bytes\n",sizeof(chartype));
}
   int main()
   {
       int inttype;
       float floattype;
       double doubletype;
       char   chartype;
       size(inttype,floattype,doubletype,chartype);
   }