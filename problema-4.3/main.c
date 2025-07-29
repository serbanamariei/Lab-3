#include<stdio.h>
#include<math.h>

int main()
{
	double EPS,a;
	int p;
	int ok=0;
	while(!ok)
	{
		printf("a = ");
		scanf("%lf",&a);
		printf("p = ");
		scanf("%d",&p);

		if(p%2==0 && a>=0) ok=1;
		else printf("Valorile introduse nu sunt corecte, p trebuie sa fie par si a trebuie sa fie pozitiv\nIntriduceti alte valori:\n");
	}

	EPS=pow(10,-p);
	double xv=1.0;
	double xn=(1.0/p)*((p-1)*xv+(a/pow(xv,p-1)));
	while(fabs(xn-xv)>EPS)
	{
		xv=xn;
		xn=(1.0/p)*((p-1)*xv+(a/pow(xv,p-1)));
	}

	printf("Comparati cu rezultatul dat de masina:\n");
	printf("Ce v-a iesit dvs: %.10lf\n",xn);
	printf("Ce trebuia sa iasa: %.10lf\n",pow(a,1.0/p));

	return 0;
}
