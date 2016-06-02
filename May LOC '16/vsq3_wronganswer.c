#include<stdio.h>
#include<limits.h>

long long int max(long long int a, long long int b)
{
	return (a>b)?a:b;
}

long long int maxSubArraySum(long long int a[], long int size)
{
	long long int max_so_far=a[0], curr_max=a[0], i;	
	for(i=1;i<size;i++)
	{
		curr_max = max(a[i], curr_max+a[i]);
		max_so_far = max(max_so_far, curr_max);
	}
	return max_so_far;
}

int main()
{
	int T,j;
	long int N,i;
	long long int q[4];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%ld",&N);
		for(i=0;i<4;i++)
			scanf("%lld",&q[i]);
		long long int A[N];
		for(i=0;i<N;++i)
			scanf("%lld",&A[i]);
		
		for(i=0;i<N;i++)
			for(j=0;j<4;j++)
				if(A[i]==q[j])
					A[i]=INT_MIN;	
		
		printf("%lld\n",maxSubArraySum(A,N));
	}
	return 0;
}
