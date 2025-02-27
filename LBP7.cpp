#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,h,A;
	printf("enter the value of a,b,h:");
	scanf("%F%f%f",&a,&b,&h);
	A=(a+b)/2*h;
	printf("%f",A);
	return 0;
}
