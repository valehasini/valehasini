#include<stdio.h>
int main()
{
	int a,m,n,x,y;
	printf("enter the value ");
	scanf("%d%d%d",&a,&m,&n,&y);
	x=m*n;
	y=pow(a,x);
	printf("%d",y);
	return 0;
}
