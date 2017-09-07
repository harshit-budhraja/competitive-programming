#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define tot 10
char S[tot],str[tot];
int length=0,n_o_f=0;

int isallhappy()
{
	int i,ret=1;
	for(i=0;i<length-1;i++)
	{
		if(S[i]=='-')	ret=0;
	}
	return ret;
}

//To flip the first n pancakes from the top
/* ALGO is to flip each pancake separately and reverse the stack */
void flip(int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(S[i]=='+')	S[i]='-';
		else if(S[i]=='-')	S[i]='+';
	}
	strncpy(str,S,n);
	str[n] = '\0'; // place the null terminator
	int len=strlen(str);
	i=len-1;
	for(;i>=0 && j<n;i--,j++)
	{
		S[j]=str[i];
	}   
}

int main(void)
{
	int T,i=0,j=0;
	scanf("%d",&T);
	for(;i<T;i++)
	{
		n_o_f=0;
		scanf("%s",&S);
		length=strlen(S);
		while(!isallhappy())
		{
			if(S[0]=='-')
			{
				for(j=0;S[j]!='+' && S[j]!='\0';j++);
				flip(j-1);
				n_o_f++;
			}
			if(S[0]=='+')
			{
				for(j=0;S[j]!='-' && S[j]!='\0';j++);
				flip(j-1);
				n_o_f++;
			}
		}
		printf("Case #%d: %d\n",i+1,n_o_f);
	}
	return 0;
}