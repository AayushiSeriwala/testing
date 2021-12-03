//percentage of 5 subjects
#include<stdio.h>
 void percentage(int s1,int s2,int s3,int s4,int s5,float per){
     int sum,total=500;
     sum=s1+s2+s3+s4+s5;
     printf("sum=%d",sum);
     per=(sum*100)/total;
     printf("percentage=%f",per);
 }
 int main()
 {
     int s1,s2,s3,s4,s5;
     float per;
     printf("enter 5 subjects\n");
     scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
     percentage(s1,s2,s3,s4,s5,per);
    
 }