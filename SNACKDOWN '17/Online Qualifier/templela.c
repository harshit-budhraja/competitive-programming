#include<stdio.h>
#include<stdlib.h>

int checkmax(int arr[],int size)
{
	// To check whether arr[N/2] is the max
	int max=arr[size/2];
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
			return 0;
	}

	return 1;
}

int main()
{
	int S=0;	//Number of strips to check i.e. no of test cases
	int N=0;	//Number of lengths in which the strip is divided
	scanf("%d",&S);
	int m=S;
	while(S--)
	{
		int flag=0;	//0 denoting 'no' and 1 denoting 'yes'
		// Accepting the inputs from the online judge
		scanf("%d",&N);
		int H[N];	//Heights of the various paths in the Nth strip
		int i=0;
		for(i=0;i<N;i++)
		{
			scanf("%d",&H[i]);
		}

		//printf("CASE #%d\n",m-S);

		// Validating the strips
		// 1. First and last strips should have the height 1
		if(H[0]==1 && H[N-1]==1)
			flag=1;
		else
		{
			flag=0;
			//printf("FAILED: Check[1]\n");
		}
		//printf("After Check[1] - Flag=%d\n",flag);

		
		if(flag==1)
		{	
			// 2. Checking for a unique center part
			// There will exist a unique center part ONLY IF 'N' is odd and H[N/2] is the maximum
			if(N%2!=0 && checkmax(H,N))
				flag=1;
			else
			{
				flag=0;
				//printf("FAILED: Check[2]\n");
			}
		}
		//printf("After Check[2] - Flag=%d\n",flag);

		if(flag==1)
		{	
			// 3. Uniform increase/decrease in heights by 1 around the center
			for(i=1;i<=N/2;i++)
			{
				if(H[i]-H[i-1] == 1)
					flag=1;
				else
				{
					flag=0;
					//printf("FAILED: Check[3][left] as <%d-%d=%d>\n",H[i],H[i-1],H[i]-H[i-1]);
				}
			}
			//printf("After Check[2][left] - Flag=%d\n",flag);
			if(flag==1)
			{	
				for(i=(N/2)+1;i<N;i++)
				{
					if(H[i]-H[i-1] == -1)
						flag=1;
					else
					{
						flag=0;
						//printf("FAILED: Check[3][right] as <%d-%d=%d>\n",H[i],H[i-1],H[i]-H[i-1]);
					}
				}
			}
			//printf("After Check[2][right] - Flag=%d\n",flag);
		}
		//printf("After Check[3] - Flag=%d\n",flag);


		// Finally printing the 'yes' answer
		if(flag==1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}