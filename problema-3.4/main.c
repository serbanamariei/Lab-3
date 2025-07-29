#include<stdio.h>
	
int main()
{
	int x,y,a,b;
	int d1,d2,s1,s2;
	printf("Introduceti intervalul:\n");
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);

	if (x <= 0 || y <= 0 || x > y) 
	{
		printf("Interval invalid.\n");
		return 0;
	}

	for(a=x;a<=y;++a)
	{
		s1=0;
		for(d1=1;d1<=a/2;++d1)
		{
			if(a%d1==0) s1+=d1;
		}
		for(b=a+1;b<=y;++b)
		{
			s2=0;
			for(d2=1;d2<=b/2;++d2)
			{
				if(b%d2==0) s2+=d2;
			}
			
			if(s1==b && s2==a) printf("Numerele %d si %d sunt prietene\n",a,b);
		}
	}

	return 0;
}
