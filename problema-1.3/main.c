#include<stdio.h>

int main()
{
	int a,b;
	int alegere;

	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("Alegeti ce doriti sa faceti:\n");
	printf("1) Suma\n2) Diferenta\n3) Produsul\n4) Impartirea\nalegere --> ");
	scanf("%d",&alegere);
	switch(alegere){
		case 1:{
				   printf("Suma = %d\n",(a+b));
			   }
		break;
		case 2:{
				   printf("Diferenta = %d\n",(a-b));
			   }
		break;
		case 3:{
				   printf("Produsul = %d\n",(a*b));
			   }
		break;
		case 4:{
				   printf("Impartirea = %d\n",(a/b));
			   }
		break;
		default:{
					printf("Nu este o alegere valida\n");
				}
		break;
	}

	return 0;
}
