#include<stdio.h>
#include<string.h>

int main()
{
	int T;
	long int N=10001,sx=0,sy=0,i,j,xz=0,yz=0;
	char X[N],Y[N];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",&X);
		scanf("%s",&Y);
		sx=strlen(X);
		sy=strlen(Y);
		char Z[sx];
		for(i=0;i<sx;i++)
			Z[i]=0;
		
		for(i=0;i<sx;i++)
		{
			if(X[i]==Y[i])
			{
				if(X[i]=='B')
					Z[i]='W';
				else if(X[i]=='W')
					Z[i]='B';
			}
		}
		//printf("%s\n",Z);
		for(i=0;i<sx;i++)
			printf("%c",Z[i]);
		printf("\n");
	}
	return 0;
}
				
