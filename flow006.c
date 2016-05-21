#include <stdio.h>
 
int main(void) 
{
	int N,T,sum=0;
	scanf("%d",&T);
	while(T--)
	{
		sum=0;
		scanf("%d",&N);
		while(N>0)
		{
			sum+=N%10;
			N/=10;
		}
		printf("%d\n",sum);
	}
	return 0;
}