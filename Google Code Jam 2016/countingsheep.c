#include<stdio.h>
int finalarr[10];

int count_digits(int num) 
{
 int count=1;
 while (num/=10) count++;
 return count;
}

int isunique(int n)
{
	int i,ret=1;
	for(i=0;i<10;i++)
	{
		if(finalarr[i]==n)
		{
			ret=0;
			break;
		}
	}
	return ret;
}

int notfull()
{
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		sum+=finalarr[i];
	}
	if(sum!=45)	return 1;
	else return 0;
}

int main(void)
{
	int T,i=0,dig,j,number=0,k=0;
	int N;
	scanf("%d",&T);
	for(;i<T;i++)
	{
		number=j=0;
		scanf("%d",&N);
		if(N==0)
		{
			printf("Case #%d: INSOMNIA\n",i+1);
			continue;
		}
		while(number<10)
		{
			j=(++k)*N;
			dig=count_digits(j);
			int arr[dig];
			while(dig--) 
			{
 				arr[dig]=j%10;
 				j/=10;
 				if(isunique(arr[dig]))	finalarr[number++]=arr[dig];
			}
		}
		printf("Case #%d: %d\n",i+1,j);
	}
	return 0;
}