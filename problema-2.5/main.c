#include<stdio.h>

int main()
{
	int x;
	printf("x = ");
	scanf("%d",&x);
	while(x)
	{
		int d=0;
		while(d*d<x) ++d;
		--d;
		printf("patrat: %d\n",d*d);
		printf("x = ");
		scanf("%d",&x);
	}

	return 0;
}
