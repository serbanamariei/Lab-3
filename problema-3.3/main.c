#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	double b,a,m;
	int nr=0,poz=0;
	printf("b = ");
	scanf("%lf",&b);
	printf("a = ");
	scanf("%lf",&a);
	while(a>=0)
	{
		if(nr==0) m=a;
		else if(fabs(b-a)<fabs(b-m))
		{
			m=a;
			poz=nr;
		}
		printf("a = ");
		scanf("%lf",&a);
		nr++;
	}

	printf("Cel mai apropiat numar de b este %.2lf care se afla pe pozitia %d\n",m,poz);

	return 0;
}
