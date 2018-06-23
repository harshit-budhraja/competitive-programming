#include<stdio.h>

int main()
{
	int T,N;
	long int P;
	// Accepting the input
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %ld",&N,&P);
		long int A[N];
		int i;
		for(i=0;i<N;i++)
			scanf("%ld",&A[i]);
		
		// Processing the input and displaying the output
		int cakewalk=0,hard=0;
		for(i=0;i<N;i++)
		{
			if(A[i] >= P/2)
				cakewalk++;
			else if(A[i] <= P/10)
				hard++;
		}
		if(cakewalk==1 && hard==2)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}