//reverse a string
#include<stdio.h>
#include<string.h>
char *reverse (char s[]){
   static char rev[100];
   int i=0,l;
   l=strlen(s)-1;
  while(l>=0)
  {
      rev[i++]=s[l--];
  }
    rev[i]='\0';
    return rev;
}
    int main()
    {
        char s[100];
        char*p;
        printf("Enter a string\n");
        scanf("%s",s);
        p=reverse(s);
        printf("Reverse=%s\n",p);
    }



