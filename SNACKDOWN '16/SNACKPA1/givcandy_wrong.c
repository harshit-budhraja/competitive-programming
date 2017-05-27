#include<stdio.h>
#include<stdlib.h>

long long int gcd(long long int u, long long int v)
{
    return (v != 0) ? gcd(v, u % v) : u;
}

int main() 
{
	long int t;
	long long int A,B,C,D,r;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
		r=gcd(C,D);
		printf("%lld\n",abs(A-B)%r);
	}
	return 0;
}
