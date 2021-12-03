//ASCII value of character
#include<stdio.h>
void ascii(char ch){
    
   printf("ASCII value of character %c is %d ",ch,ch);
}
 int main()

 {
    char ch;
     printf("Enter any character\n");
     scanf("%c",&ch);
     ascii(ch);
 }