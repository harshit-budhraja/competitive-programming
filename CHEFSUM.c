/* Author:- arachnis */
#include<stdio.h>
#include<limits.h>
#define MAX INT_MAX
#define ll long long


// Custom functions
ll prefixSum(ll A[], ll size, ll n)
{
	ll sum=0,i;
	for(i=1;i<=n;i++)
	{
		sum+=A[i];
	}
	return sum;
}

ll suffixSum(ll A[], ll size, ll n)
{
	ll sum=0,i,count=0;
	for(i=size;count<(size-n+1);i--)
	{
		sum+=A[i];
		count++;
	}
	return sum;
}

// Driver function
int main()
{
	ll T=0,N=0,i;
	scanf("%lld",&T);
	ll count=1;
	while(T--)
	{
		scanf("%lld",&N);
		ll A[N+1];
		for(i=1;i<=N;i++)
		{
			scanf("%lld",&A[i]);
		}
		
		ll sum=MAX,ans=MAX,temp=0;
		for(i=1;i<=N;i++)
		{
			ll ps = prefixSum(A,N,i);
			ll ss = suffixSum(A,N,i);
			temp=ps+ss;
			//printf("CASE %lld ==> prefixSum(%lld) + suffixSum(%lld) = %lld + %lld = %lld\n",count,i,i,ps,ss,temp);
			if(temp < sum)
			{
				sum=temp;
				ans=i;
			}
		}
		
		//printf("%lld (min) is achieved at ans=%lld\n",sum,ans);
		printf("%lld\n",ans);
		count++;
	}
	return 0;
}
