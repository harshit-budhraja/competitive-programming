//Author - @harshitbudhraja
#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,i=0,j=0,temp,sum=0;
	scanf("%lld",&n);
	for(i=0;pow(2,i)<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			sum+=pow(2,(pow(2,i)+2*j));
		}
	}
	printf("Last digit of the number %lld",sum%10);
	return 0;
}
	
