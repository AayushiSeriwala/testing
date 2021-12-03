//check whether uppercase,lowercase or special character using if else statement
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character\n");
  scanf("%d",&ch);
  if(ch>='a'&&ch<='z')
    printf("the character is lowercase");
    else if(ch>='A'&&ch<='Z')
     printf("The character is Uppercase");
     else if(ch>='0'&&ch<='9')
       printf("The character is number");
        else
        printf("It is a special character");
}
