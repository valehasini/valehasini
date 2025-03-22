#include<stdio.h>
int main()
{
	float marksobtained,totalmarks,percentage;
	printf("enter the totalmarks :");
	scanf("%f",&totalmarks);
	printf("enter the marksobtained :");
	scanf("%f",&marksobtained);
	percentage=(marksobtained/totalmarks)*100;
	printf("%f",percentage);
	return 0;
}
