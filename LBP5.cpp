#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,r1,r2,x;
	printf("enter the value of a,b,c:");
	scanf("%d%d%d,&a,&b,&c");
	x=b*b-4*a*c;
	d=sqrt(x);
	r1=(-b+d)/2*a;
	r2=(-b-d)/2*a;
	printf("%d%d",r1,r2);
	return 0;	
}
