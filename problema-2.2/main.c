#include<stdio.h>

int main()
{
	int ora1,min1,sec1,ora2,min2,sec2;
	int o,m,s;
	printf("Introduceti valorile la care incepe:\n");
	printf("Ora 1: ");
	scanf("%d",&ora1);
	printf("Min 1: ");
	scanf("%d",&min1);
	printf("Sec 1: ");
	scanf("%d",&sec1);
	printf("Ora 2: ");
	scanf("%d",&ora2);
	printf("Min 2: ");
	scanf("%d",&min2);
	printf("Sec 2: ");
	scanf("%d",&sec2);
	int start=ora1*3600 + min1*60 + sec1;
	int sfarsit=ora2*3600 + min2*60 + sec2;

	if(sfarsit<start){
		sfarsit+=24*3600;
	}

	int total=sfarsit-start;
	
	o=total/3600;
	total%=3600;
	m=total/60;
	s=total%60;

	printf("Durata conexiunii a fost de  %d ore %d minute si %d secunde\n",o,m,s);
	
	return 0;
}
