//copy a string into another string
#include<stdio.h>
 void copystring(char s2[],char s1[]){
    for(int i=0;s1[i]!='\0';i++)
    s2[i]=s1[i];

 }
 int main(){
    char s1[100],s2[100];
    printf("Enter a string");
    scanf("%s",s1);
    copystring(s2,s1);
    printf("s2:%s\n",s2);
 }