#include<stdio.h>
int main()
{
 int n,d,count; 
 printf("enter the values of n & d:\t");
 scanf("%d%d",&n,&d);
 while(n>0)
 {
  if (n%10==d){
  count++;
  }
  n=n/10;
 }
 printf("%d",count);
 return 0;
}
