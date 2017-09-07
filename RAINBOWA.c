#include<stdio.h>

int israinbow(int A[], int N)
{
	int i,j,flag1=1,flag2=1;
	int num=1,count=0;
	
	// Condition #1 - PALINDROME
	for(i=0,j=N-1;i<j;i++,j--)
	{
		if(A[i]!=A[j])
		{
			flag1=0;
			break;
		}
	}
	//printf("[Palindrome] - %d\n",flag1);
	
	if(flag1)
	{
		// Condition #2 - a1,a2...etc
		for(i=0;i<N/2+1;i++)
		{
			//printf("%d ",A[i]);
			if(A[i+1]-A[i] >= 2 || A[i+1]-A[i] <= -2)
			{
				flag2=0;
				break;
			}
		}
		//printf("\n[Repeats] - %d\n",flag2);
	}
	
	return flag1 && flag2;
}

int main()
{
	int T=0,N=0,i=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		int A[N];
		for(i=0;i<N;i++)
			scanf("%d",&A[i]);
		
		int check = israinbow(A,N);
		if(check)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}