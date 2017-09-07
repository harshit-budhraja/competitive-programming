#include<stdio.h>
long int i=0,j=0;

int main()
{
	int T=0,N=0,M=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&N,&M);
		long int minSalary[N],offeredSalary[M],maxJobOffers[M];
		for(i=1;i<=N;i++)
			scanf("%ld",minSalary[i]);
		for(i=1;i<=M;i++)
			scanf("%ld %ld",&offeredSalary[i],&maxJobOffers[i]);
		int qual[N][M];
		for(i=1;i<=N;i++)
			for(j=1;j<=M;j++)
				scanf("%d",&qual[i][j]);
		
			
	}
	return 0;
}