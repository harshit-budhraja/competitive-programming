#include<stdio.h>
long int n;
int curr_rider;

void riderchange(int cr,int d)
{
	curr_rider = (cr==0)?1:0;
	n-=d;
}

int main()
{
	int T,i,j;
	char *participants[]={"JACK", "JENNY"};
	scanf("%d",&T);
	while(T--)
	{
		scanf("%ld",&n);
		curr_rider=0;
		while(n!=0)
		{
			if(n>=5)
				riderchange(curr_rider,5);
			else if(n>=3)
				riderchange(curr_rider,3);
			else if(n>=1)
				riderchange(curr_rider,1);
		}
		printf("%s\n",participants[curr_rider]);
	}
	return 0;
}
