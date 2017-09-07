#include<stdio.h>
#include<stdlib.h>
long int sum=0,csize=0;

int check(long int s,long int N)
{
	if(s%N==0)
		return 1;
	else
		return 0;
}

void subArray(long int arr[], long int n)
{
	long int i,j,k;
	long int start=0,end=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i,start=i;k<=j;k++)
			{
                //printf("%ld ",arr[k]);
				sum+=arr[k];
				csize++;
			}
			end=k;
			//printf("Sum=%ld | Size=%ld\n",sum,csize);
			if(check(sum,n))
			{
				printf("%ld %ld\n",start+1,end);
				return ;
			}
			sum=0;
			csize=0;
        }
    }
}

int main()
{	
	int T=0;
	long int N=0;
	scanf("%d",&T);
	while(T--)
	{
		//printf("CASE\n");
		scanf("%ld",&N);
		long int a[N],i=0;
		for(i=0;i<N;i++)
			scanf("%ld",&a[i]);
		subArray(a,sizeof(a)/sizeof(long int));
	}
	return 0;
}