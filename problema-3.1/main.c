#include<stdio.h>

int main()
{
	int x,y;
	printf("Introduceti coordonatele punctului:\n");
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);

	if(x&&y)
	{
		if(x>0 && y>0)
		{
			printf("Punctul introdus se afla in primul cadran\n");
		}
		else
		if(x<0 && y>0)
		{
			printf("Punctul se alfa in al doilea cadran\n");
		}
		else
		if(x<0 && y<0)
		{
			printf("Punctul se afla in cadranul al treilea\n");
		}
		else
		{
			printf("Punctul se afla in cadranul al patrulea\n");
		}
	}
	else
	{
		if(x==0 && y<0) printf("Punctul se afla intre cadranul 3 si 4\n");
		else
		if(x==0 && y>0) printf("Punctul se afla intre cadranul 1 si 2\n");
		else
		if(y==0 && x<0) printf("Punctul se afla intre cadranul 2 si 3\n");
		else printf("Punctul se afla intre cadranul 1 si 3\n");
	}

	return 0;
}
