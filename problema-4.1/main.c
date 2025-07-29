#include<stdio.h>

int main()
{
	int x,y,d,s;
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);

	for(int n=x;n<=y;++n)
	{
		s=0;
		for(d=1;d<n/2;++d)
		{
			if(n%d==0) s+=d;
		}
		if(s==n) printf("Numarul %d este perfect\n",n);
		else if(s<n) printf("Numarul %d este deficient\n",n);
		else printf("Numarul %d este abundent\n",n);
	}

	return 0;
}
