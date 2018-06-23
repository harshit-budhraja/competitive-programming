// C++14
#include <stdio.h>
#include <string.h>
int main()
{
	char tc;
	scanf("%d",&tc);
	while(tc--)
	{
	char i,j;
	char s[1000099];
	char a[10];
	scanf("%s",s);
	for(i=0;i<10;i++)
	{
		a[i]=0;
	}
	for(i=0;i<strlen(s);i++){
		a[(s[i]-48)]++;
	}	
	char ans;
	for(i=6;i<10;i++){
		if(a[i]>=1)
		{
		for(j=0;j<10;j++){
			if(j!=i){
				if(a[j]>=1){
					ans = 10*i+j;
					if (ans>64 && ans<91)		
					printf("%c",ans);
				}
			}
			else{
				if(a[j]>=2){
				ans = 10*i+j;
				if (ans>64 && ans<91)		
					printf("%c",ans);
				}
			}
		}
		}
	}
	printf("\n");
}
return 0;
}
