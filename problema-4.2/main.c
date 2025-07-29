#include<stdio.h>

int main()
{
	int n,u,v;
	printf("n = ");
	scanf("%d",&n);
	int rel=1;
	while(rel)
	{
		int mic,mare,egal;
		mic=mare=egal=0;
		printf("v[0] =  ");
		scanf("%d",&u);
		for(int i=1;i<n;++i)
		{
			printf("v[%d] = ",i);
			scanf("%d",&v);

			if(u<v) mic++;
			else if(u==v) egal++;
			else mare++;

			u=v;
		}

		if (mic > 0 && egal == 0 && mare == 0)
            printf("Sir de tip 6 (strict crescator)\n");
        else if (mic > 0 && egal > 0 && mare == 0)
            printf("Sir de tip 5 (crescator)\n");
        else if (mic == 0 && egal > 0 && mare == 0)
            printf("Sir de tip 4 (constant)\n");
        else if (mic == 0 && egal > 0 && mare > 0)
            printf("Sir de tip 3 (descrescator)\n");
        else if (mic == 0 && egal == 0 && mare > 0)
            printf("Sir de tip 2 (strict descrescator)\n");
        else
            printf("Sir de tip 1 (oarecare)\n");

		printf("Doriti sa reluati programul ? 1-DA 0-NU\n");
		scanf("%d",&rel);
	}
}
