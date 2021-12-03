//lowercase to uppercase
#include<stdio.h>
#include<string.h>
int main(){
char *tolowercase(char []);
    char s1[100];
    char *p;
    printf("enter a string in uppercase \n");
    scanf("%s",s1);
    p=tolowercase(s1);
    printf("lowercase=%s/n",p);
}
  char *tolowercase(char s1[])
{
     static char result[100];
     int i;
     for(i=0;s1[i]!='\0';i++){
     if(s1[i]>='A'&&s1[i]<='Z'){
      result[i]=s1[i]+32;
}
    else
    result[i]=s1[i];
}
    result[i] ='\0';
    return result;
}