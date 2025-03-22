#include<stdio.h>
int main()
{
	float r,v;
	int h;
	printf("enter the value of r :");
	scanf("%f",&r);
	printf("enter the valie of h :");
	scanf("%d",&h);
	r=0.33*3.14*r*r*h;
	printf("%f",r);
	return 0;
}
