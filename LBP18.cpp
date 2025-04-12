#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,s;
	int A;
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%d",A);
	return 0;
}
