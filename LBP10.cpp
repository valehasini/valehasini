#include<stdio.h>
#include<math.h>
int main()
{
	float n,sum;
	printf("enter the values of n :");
	scanf("%f%f",&n,&sum);
	sum=n*(n+1)/2;
	printf("%f",sum);
	return 0;
}
