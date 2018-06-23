#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;

long int cmpfunc (const void * a, const void * b) {
   return ( *(long int*)a - *(long int*)b );
}

long int mex(long int A[],long int N)
{
	long int i;
	//qsort(A, N, sizeof(long int), cmpfunc);
	sort(A, A + N);
	
	for(i=0;i<N;i++)
	{
		if(i!=A[i])
			return i;
	}
}

void printA(long int A[], long int N)
{
	long int i;
	for(i=0;i<N;i++)
		printf("%ld ",A[i]);
}

int main()
{
	int T;
	long int N,K,last_pos;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%ld %ld",&N,&K);
		long int i,A[N+K];
		for(i=0;i<N;i++)
			scanf("%ld",&A[i]);
		last_pos=N-1;
		
		if(K==0)
			printf("%ld\n",mex(A,N));
		else
		{
			//printA(A,N);
			//printf("\n");
			for(i=0;i<K;i++)
			{
				A[last_pos+1]=mex(A,N+i);
				last_pos++;
			}
			//printA(A,N+K);
			//printf("\n");
			printf("%ld\n",mex(A,N+K));
		}
	}
	return 0;
}