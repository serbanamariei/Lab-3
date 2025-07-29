#include<stdio.h>
#include<stdbool.h>
bool verif(int a, int b, int c);
bool echi(int a, int b, int c);
bool iso(int a, int b, int c);
bool drept(int a, int b, int c);

int main()
{
	int a,b,c;
	printf("Introduceti laturile triunghiului:\n");
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);

	if(verif(a,b,c))
	{
		if(echi(a,b,c)) printf("Triunghiul este echilateral\n");
		else if(iso(a,b,c)&&drept(a,b,c)) printf("Triunghiul este dreptunghic isoscel\n");
		else if(iso(a,b,c)) printf("Triunghiul este isoscel\n");
		else if(drept(a,b,c)) printf("Triunghiul este dreptunghic\n");
		else printf("Triunghiul este oarecare\n");
		
	}

	return 0;
}

bool verif(int a, int b, int c)
{
	if((a+b)>c && (a+c)>b && (b+c)>a) return true;
	return false;
}

bool iso(int a, int b, int c)
{
	if(a==b || a==c || b==c) return true;
	return false;
}

bool echi(int a, int b, int c)
{
	if(a==b && a==c && b==c) return true;
	return false;
}

bool drept(int a, int b, int c)
{
	if(b*b==(a*a+c*c) || a*a==(b*b+c*c) || c*c==(a*a+b*b)) return true;
	return false;
}
