#include <stdio.h>

int main() {
	long int t;
	long int n,i,flag=0;
	scanf("%ld",&t);
	while(t--)
	{
		flag=0;
		scanf("%ld",&n);
		long int arr[n];
		for(i=0;i<n;i++)
			arr[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&arr[i]);
		}
		for(i=0;i<n-2;i++)
		{
			if(arr[i]==arr[i+1])
			{
				if(arr[i+1]==arr[i+2])
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}

/*
6
4
1 5 5 5
4
1 1 1 5
3
5 5 2
5
1 1 5 5 5
5
1 1 5 5 4
6
1 1 1 1 5 5
*/

/*
Yes
Yes
No
Yes
No
Yes
*/
