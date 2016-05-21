#include <stdio.h>
 
int main(void) {
	int n[100],i=0,n1=0;
	while((scanf("%d",&n[i++]))==1)
		n1++;
	for(i=0;i<n1;i++)
		printf("%d\n",n[i]*n[i]);
	return 0;
}