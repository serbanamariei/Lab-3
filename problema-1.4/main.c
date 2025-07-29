#include<stdio.h>

int main()
{
	int n,x,s=0;
	printf("n = ");
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		printf("elem[%d] = ",i);
		scanf("%d",&x);
		s+=x;
	}
	printf("Rezultatul sumei este: %d\n",s);

	return 0;
}
