#include<stdio.h>

int main()
{
	double x,p=1;
	printf("x = ");
	scanf("%lf",&x);
	while(x)
	{
		p*=x;
		printf("x = ");
		scanf("%lf",&x);
	}
	printf("Rezultatul este %.2lf\n",p);

	return 0;
}
