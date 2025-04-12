#include<stdio.h>
int main()
{
	int i,n;
	int n1=0,n2=1;
	int fibo=n1+n2;
	printf("enter number of terms");
	scanf("%d",&n);
	printf("%d%d",n1,n2);
	for(i=3;i<=n;i++)
	{
		printf("%d;fibo");
		n1=n2;
		n2=fibo;
		fibo=n1+n2;
	}
	return 0;
}
