#include <stdio.h>

int main(void) {
	int i=0,T,n,L[100],R[100],temp[100],max,c,p,h;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&L[i]);
		for(i=0;i<n;i++)
			scanf("%d",&R[i]);
		for(i=0;i<n;i++)
			temp[i]=L[i]*R[i];
		max=temp[0];
		p=1;
		for(i=0;i<n;i++)
		{
			if(temp[i]>max)
			{
				max=temp[i];
				p=i;
			}
			if(temp[i]==max)
			c++;
		}
		if(c>0)
		{
			h=R[0];
			for(i=0;i<n;i++)
			{
				if(temp[i]==max)
				{
					if(R[i]>h &&i!=0)
					{
						h=R[i];p=i+1;
					}
				}
			}
		}
		printf("%d\n",p);
	}
	return 0;
}
