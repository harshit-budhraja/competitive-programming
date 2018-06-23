#include<stdio.h>
#include<stdlib.h>

// C function to find maximum in arr[] of size n
long long largest(long long arr[], int n, long long l)
{
    int i;
    long long max=-1;
	
    // Initialize maximum element
    for(i=0;i<n;i++)
	{
		if(arr[i]<l)
			max=arr[i];
	}
 
	if(max>-1)
	{
		// Traverse array elements from second and
		// compare every element with current max  
		for (i = 1; i < n; i++)
			if (arr[i] > max && arr[i]<l)
				max = arr[i];
	}
 
    return max;
}

int main()
{
	int T=0;
	long long prev=1000000000,temp=0;
	scanf("%d",&T);
	while(T--)
	{
		int N=0;
		scanf("%d",&N);
		int i,j;
		long long A[N][N];
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				scanf("%lld",&A[i][j]);
			}
		}
		
		long long sum=0;
		for(i=N-1;i>=0;i--)
		{
			//printf("Largest = %lld and Previous = %lld\n",temp,prev);
			temp = largest(A[i],N,prev);
			if(temp==-1)
			{
				printf("-1\n");
				break;
			}
			prev = temp;
			sum += temp;
		}
		if(temp>-1)
			printf("%lld\n",sum);	
	}
	return 0;
}