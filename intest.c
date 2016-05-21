#include <stdio.h>
 
int main(void) {
	int n,k,i;
	scanf("%d %d",&n,&k);
	int num[n],count=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]%k==0)
			count++;
	}
	printf("%d",count);
	return 0;
}
 