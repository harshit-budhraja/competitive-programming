#include<stdio.h>

int main()
{
	int T=0;
	scanf("%d",&T);
	while(T--)
	{
		int a=0,b=0,c=0,d=0;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a==b)
		{
			if(c==d)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else if(a==c)
		{
			if(b==d)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else if(a==d)
		{
			if(b==c)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}