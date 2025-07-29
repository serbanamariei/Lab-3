#include<stdio.h>

int main()
{
	printf("a)\n");
	int pas=10;
	for(int f=0;f<=300;f+=pas)
	{
		int c=5*(f-32)/9;
		printf("%d ",c);
	}
	printf("\n");
	printf("b)\n");

	printf("pas de evaluare = ");
	scanf("%d",&pas);
	for(int c=0;c<=400;c+=pas)
	{
		int f=c*9/5+32;
		printf("%d ",f);	
	}

	return 0;
}
