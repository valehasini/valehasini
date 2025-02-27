#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x;
	printf("enter the value of a,b,c:");
	scanf("%d%d",&a,&b);
	x=a*a+b*b;
	c=sqrt(x);
	printf("%d",c);
	return 0;
}
