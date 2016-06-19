#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int main() 
{
	int t,a,n,k,e,m,b,c,x,y[10000],z;
	scanf("%d",&t);
	for(a=0;a<t;a++)
	{
		scanf("%d %d %d %d",&n,&k,&e,&m);
		for(b=0;b<n-1;b++)
		{ 
			y[b]=0;
			for(c=0;c<e;c++)
			{
				scanf("%d",&x);
				y[b]+=x;
			}
		}
		sort(y,y+n-1);
		for(b=0;b<e-1;b++)
		{
			scanf("%d",&z);
			y[k-1]-=z;
		}
		if(y[k-1]<0)
			printf("0");
		else if(y[k-1]>m) 
			printf("Impossible");
		else 
			printf("%d",y[k-1]+1);
		if(a<t-1) 
			printf("\n");
	}
	return 0;
}
