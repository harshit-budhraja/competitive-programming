#include <stdio.h>
 
int main(void) 
{
	int n1,n2,n3;
	while((scanf("%d %d %d",&n1,&n2,&n3)==3))
	{
		if((n1>n2 && n1<n3) || (n1<n2 && n1>n3))
			printf("%d\n",n1);
		else if((n2>n1 && n2<n3) || (n2<n1 && n2>n3))
			printf("%d\n",n2);
		else if((n3>n1 && n3<n2) || (n3<n1 && n3>n2))
			printf("%d\n",n3);
		
	}
	return 0;
}
