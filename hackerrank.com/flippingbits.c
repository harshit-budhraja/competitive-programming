#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int i,flip;
		scanf("%lld",&i);
	    flip=pow(2,32)-i-1;
		printf("%lld\n",flip);
	}
	return 0;
}