#include<stdio.h>

int main()
{
	long int T;
	long long int N;
	scanf("%ld",&T);
	while(T--)
	{
		scanf("%lld",&N);
		if(N%2==0 && (N/2)%2==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
