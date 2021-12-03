//compare the string
#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100]; 
    int x;
    printf("Enter 1st string\n");
    scanf("%s",s1);
    printf("Enter 2nd string\n");
    scanf("%s",s2);
    x=strcmpi(s1,s2);
    if(x==0)
      printf("%s equals to %s\n",s1,s2);
      else if(x>0)
       printf("%s greater then %s\n",s1,s2);
       else
       printf("%s less than %s \n",s1,s2);
}
