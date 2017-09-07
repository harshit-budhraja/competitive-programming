#include<stdio.h>
#include<stdlib.h>

int check(int sum, int product)
{
	if(product%sum==0)
		return 1;
	else
		return 0;
}

int main()
{
	int T=0,N=0;
	int count;
	scanf("%d",&T);
	while(T--)
	{
		count=0;
		scanf("%d",&N);
		int i,j;
		for(i=1;i<=N;i++)
		{
			for(j=i+1;j<=N;j++)
			{
				if(check((i+j),(i*j)))
					count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}