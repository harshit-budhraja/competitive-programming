#include<stdio.h>
#define size 100001
int main()
{
	long long int T,i,A[size],N,temp=1000000001,index,sum,max;
	scanf("%lld",&T);
	while(T--)
	{
		temp=1000000001;
		scanf("%lld",&N);
		for(i=1;i<=N;i++)
			scanf("%lld",&A[i]);
		for(i=N;i>=1;i--)
		{
			if(A[i]<temp)
			{
				temp=A[i];
				index=i;
			}
		}
		sum=0,max=-1000000001;
		for(i=N;i>=1;i--)
		{
			if(i==index)
				continue;
			else
			{
				sum=sum+A[i];
				if(sum>max)
				max=sum;
			}
		}
		printf("%lld\n",max);
	}
	return 0;
}
