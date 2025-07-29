#include<stdio.h>

int main()
{
	int x,y;
	
	printf("x = ");
	scanf("%d",&x);

	if(x<=2){
		y=x*x+3*x+5;
	}
	else if(x<8){
		y=3*x;
	}
	else{
		int i;
		y=1;
		for(i=0;i<x;++i) y=2.7*y;
		y+=2;
	}

	printf("y = %d\n",y);

	return 0;
}
