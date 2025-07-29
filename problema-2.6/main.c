#include<stdio.h>

int main()
{
	int a,b;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	while(b)
	{
		int r=a%b;
		a=b;
		b=r;
	}
	printf("cmmdc = %d\n",a);

	return 0;
}
