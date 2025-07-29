#include<stdio.h>

int main()
{
	int x,p=1;
	printf("x = ");
	scanf("%d",&x);
	while(x){
		p*=x;
		printf("x = ");
		scanf("%d",&x);
	}

	printf("Rezultatul produsului este: %d\n",p);
	return 0;
}
