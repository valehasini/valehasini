#include<stdio.h>
int main()
{
	int n,s;
	printf("enter the value of n :");
	scanf("%d",&n);
	s=n*(n+1)*(2*n+1)/6;
	printf("%d",s);
	return 0;
}
