//uppercase to lowercase
#include<stdio.h>
#include<string.h>
int main(){
char *touppercase(char []);
    char s1[100];
    char *p;
    printf("enter a string in lowercase \n");
    scanf("%s",s1);
    p=touppercase(s1);
    printf("uppercase=%s/n",p);
}
  char*touppercase(char s1[])
{
     static char result[100];
     int i;
     for(i=0;s1[i]!='\0';i++){
     if(s1[i]>='a'&&s1[i]<='z'){
      result[i]=s1[i]-32;
}
    else
    result[i]=s1[i];
}
    result[i] ='\0';
    return result;
}