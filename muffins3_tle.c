#include<stdio.h>

int main()
{
	int T,A=1,i,rem=0,ans,tmp;
	long long int N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld",&N);
		rem=N%A;
		for(i=1;i<=N;i++)
		{
			A=i;
			tmp=N%A;
			if(tmp>=rem)
			{
				rem=tmp;
				ans=A;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
