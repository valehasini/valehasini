#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	printf("enter the integers");
	scanf("%d%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("%d%d",a,b);
}
