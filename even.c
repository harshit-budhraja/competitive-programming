#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int isprime(long long int n)
{
	if (n==2)
        return 1;
    if (n%2==0)
        return 0;
    long long int i;
    for(i=3;i<=sqrt(n);i+=2)
        if (n%i==0)
            return 0;
    return 1;
}

int main()
{
	long long int i,j,count=1;
	int status=1;
	for(i=4;status!=0;i+=2)
	{
		status=1;
		for(j=i;j!=0;j--)
		{
			if(isprime(j))
			{
				if(isprime(i-j))
				{
					printf("#%lld. Found %lld = %lld + %lld\n",count++,i,j,i-j);
					break;
				} 
				else
					continue;
			}
			if(!status)
			{
				printf("VERIFIED TO BE FALSE FOR %lld = %lld + %lld\n",i,j,i-j);
				exit(0);
			}
		}
	}
	return 0;
}