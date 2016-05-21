#include <stdio.h>
 
int main(void) {
	int T=0,i;
	scanf("%d",&T);
	int a[T],b[T];
	for(i=0;i<T;i++)
		scanf("%d %d",&a[i],&b[i]);
	for(i=0;i<T;i++)
		printf("%d\n",a[i]+b[i]);
	return 0;
}
 