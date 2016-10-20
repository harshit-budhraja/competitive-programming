#include<stdio.h>
#include<string.h>


int main() 
{
	int t,k,ans;
	scanf("%d",&t);
	char string[50];
	while(t--)
	{
		scanf("%s",&string);
		scanf("%d",&k);
		int c=0, count[26] = {0};
		int mod=0,ans=0,sum=0;
		while(string[c] != '\0')
	   	{
			if (string[c] >= 'a' && string[c] <= 'z') 
		 		count[string[c]-'a']++;
	 			c++;
		}
	 	for (c = 0; c < 26; c++)
	   	{
	 		if(count[c] != 0)
	 		{
	 			ans += (int)count[c]/k;
	 			mod = (int)count[c]%k;
	 			sum += (int)mod;
	 		}
		}
		//printf("%d %d %d\n",ans,mod,sum);
		if(sum%k==0)
			ans+=(sum/k);
		else
			ans+=(sum/k)+1;
		printf("%d\n",ans);	
	}
	return 0;
}
