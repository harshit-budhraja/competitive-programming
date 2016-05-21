/*
Logic seen at http://www.purplemath.com/modules/factzero.htm
*/
#include<stdio.h>
#include<math.h>

int main(void)
{
	int T,i,sum=0,q;
	long int N;
	scanf("%d",&T);
	while(T--)
	{
		i=1;
		sum=0;
		scanf("%d",&N);
		while(1)
		{
			q=N/pow(5,i);
			if(q<1)	break;
			sum+=q;
			i++;
		}
		printf("%d\n",sum);
	}
}