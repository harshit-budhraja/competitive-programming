#include<stdio.h>
#include<string.h>
int main(void)
{	
	int T=0;
	scanf("%d",&T);
	char dish1[4][10],dish2[4][10];
	int count=0;
	while(T--)
	{
		count=0;
		int i=0;
		for(i=0;i<4;i++)
		{
			scanf("%s",&dish1[i]);
		}
		for(i=0;i<4;i++)
		{
			scanf("%s",&dish2[i]);
			int j=0;
			for(j=0;j<4;j++)
			{
				if(strcmp(dish1[j],dish2[i])==0)
				{
					count++;
					break;
				}
			}
		}
		if(count>=2)
			printf("similar\n");
		else
			printf("dissimilar\n");
	}
	return 0;
}
