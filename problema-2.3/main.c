#include<stdio.h>

int main()
{
	int ora1,min1,sec1,dh,dm,ds;
	int ora2,min2,sec2;

	printf("Introduceti la ce ora a inceput conexiunea si cat a durat conexiunea (ore, min, sec):\n");
	printf("Start: ");
	scanf("%d %d %d", &ora1,&min1,&sec1);
	printf("Sfarsit: ");
	scanf("%d %d %d",&dh,&dm,&ds);

	sec2=sec1+ds;
	min2=min1+dm+sec2/60;
	sec2%=60;
	ora2=ora1+dh+min2/60;
	min2%=60;

	if(ora2>24) printf("Conexiunea a durat pana ziua urmatoare la ora %d, %d minute si %d secunde\n",ora2%24,min2,sec2);
	else printf("Conexiunea s-a intrerupt la ora %d, %d minute si %d secunde\n",ora2,min2,sec2);

	return 0;
}
