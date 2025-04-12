#include<stdio.h>
int main()
{
	int n,i=0,j,a[15];
	printf("enter the number :");
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for(i=i-1;i>=0;j--)
	printf("%d",a[j]);
	return 0;
}
