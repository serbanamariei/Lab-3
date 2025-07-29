#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c;
	printf("a = ");
	scanf("%lf",&a);
	printf("b = ");
	scanf("%lf",&b);
	printf("c = ");
	scanf("%lf",&c);
	int delta=b*b-4*a*c;
	if(delta<0){
		printf("Nu exista radacini reale\n");
	}
	else if(delta==0){
		printf("Radacina este: %.2lf\n",(-b+sqrt(delta))/(2*a));
	}
	else{
		printf("Prima radacina este %.2lf si a doua radacina este %.2lf\n",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
	}
}
