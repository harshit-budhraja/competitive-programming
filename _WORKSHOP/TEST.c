#include<stdio.h>
int main()
{	
	int n[100],i=0,n1=0;
	while(1)
	{
		scanf("%d",&n[i]);
		if(n[i]==42)	break;
		i++;
		n1++;
	}
	for(i=0;i<n1;i++)
		printf("%d\n",n[i]);
}
 