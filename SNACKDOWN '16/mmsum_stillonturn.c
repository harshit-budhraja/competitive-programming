#include<stdio.h>
long long int i2,i3,final_index;

long long int max(long long int a, long long int b)
{
	return (a>b)?a:b;
}

long long int maxSubArraySum(long long int a[], long int size)
{
	long long int max_so_far=a[0], curr_max=a[0], i;
	for(i=1;i<size;i++)
	{
		if(a[i] > curr_max + a[i])
		{	
			curr_max = a[i];
			i2 = i;
		}
		else
			curr_max += a[i];
		//curr_max = max(a[i], curr_max+a[i]);
		//max_so_far = max(max_so_far, curr_max);
		if(max_so_far < curr_max)
		{
               		max_so_far = curr_max;
               		i3 = i ;
               		final_index = i2;
          	}
	}
	return max_so_far;
}

int main()
{
	int T,i;
	long int N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%ld",&N);
		long long int A[N],ans=0,mini=0;
		for(i=0;i<N;++i)
			scanf("%lld",&A[i]);
		//printf("%lld\n",maxSubArraySum(A,N));
		ans = maxSubArraySum(A,N);
		mini = 0;
		for(i=final_index;i<=i3;i++)
    		{
        		if(A[i]<mini)
            			mini =  A[i];
    		}
		ans -= mini;
		i2 = 0;
		printf("%lld\n",ans);
	}
	return 0;
}
