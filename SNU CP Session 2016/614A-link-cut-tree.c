#include<stdio.h>
#include<math.h>
int main()
{
	long long int l=0,r=0;
	long int k=0;
	int flag=0;
	scanf("%lld %lld %ld",&l,&r,&k);
	long long int i=0,ans=l;
	while(1)
	{
		ans=pow(k,i++);
		if(ans>=l && ans<=r)
		{
			printf("%lld ",ans);
			flag=1;
		}
		else
			break;
	}
	if(flag==0)
		printf("-1");
	return 0;
}
	
