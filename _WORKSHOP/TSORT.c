#include<stdio.h>
#include<stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void) {
	int t=0,i=0;
	scanf("%d",&t);
	int N[t];
	for(;i<t;++i)
	{
		scanf("%d",&N[i]);
	}
	qsort(N, t, sizeof(int), compare);
	for(i=0;i<t;i++)
		printf("%d\n",N[i]);
	return 0;
}
