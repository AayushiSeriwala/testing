//character to abbreviated
#include<stdio.h>
void abbreviated();
int main()
{
     char fname[20], mname[20], lname[20];
     printf("Enter The First Name Middle Name & Last Name \n");
     scanf("%s %s %s", fname, mname, lname);
     abbreviated(fname,mname,lname);
}
     void abbreviated(char fname[0],char mname[0],char lname[0]){
     
     printf("Abbreviated name: ");
     printf("%c. %c. %s\n", fname[0], mname[0], lname);
     }
     

