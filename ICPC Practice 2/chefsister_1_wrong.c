#include<stdio.h>
#include<string.h>

int main() 
{
	int t,k,ans;
	scanf("%d",&t);
	char s[50];
	while(t--)
	{
		scanf("%s",&s);
		scanf("%d",&k);
		int l=strlen(s);
		//printf("%d %d\n",l,k);
		if(l%k==0)
			ans=(int)l/k;
		else
			ans=(int)(l/k)+1;
		printf("%d\n",ans);
	}
	return 0;
}
