#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10],i,*a[10]={"while","if","for","return","else","getch","do while"};
	int flag=0;
	printf("enter the string ");
	scanf("%s",s1);
	int n;
	n=size of (a)/size of (a[0]);
	for(i=0;i<=n;i++)
	{
		if (strcmp(s1,a[i])==0)
		{
			flag=1;
			break;
		}
		if(flag==1)
		printf("true");
		else
		printf("flase");
		return 0;
	}
}
