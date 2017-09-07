#include<stdio.h>
#include<math.h>

int isprime(int n)
{
	flag=1;
	for(i=2;i<=n/2;++i)
  	{
      	if(n%i==0)
      	{
          	flag=0;
         	break;
      	}
  	}
  	return flag;
}

void n2dec(int n,int b)
{
	long long i=0,ans=0,ptr,k=0,status=1;
	for(;b<=10;b++)
	{
		ans=0;
		ptr=n;
		i=0;
		while(ptr>0)
		{
			ans=ans+(ptr%10)*pow(b,i);
			ptr=ptr/10;
			i++;
		}
		if(isprime(ans))
		{
			status=0;
			break;
		}
	}
}

int main()
{
	int T,N,J,i=0,k=0;
	scanf("%d",&T);
	for(;i<T;i++)
	{
		scanf("%d %d",&N,&J);
		printf("Case #%d:\n",i+1);
		for(k=0;k<J;k++)
		{

		}
	}
	return 0;
}