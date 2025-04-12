#include<stdio.h>
int main()
{
 int year;
 printf("enter the year:");
 scanf("%d",&year);
 if(year%400==0&&year%4==0)
 printf("true");
 else
 printf("false");
 return 0;
}
