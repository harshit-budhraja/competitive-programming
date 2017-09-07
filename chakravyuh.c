/* Chakravyuh - TCS Mockvita #2
** Author:- Harshit Budhraja
** Date:- 6th July, 2017
*/

/* Type of Chakravyuh
	|1  2  3  4  5|				|[0,0] [0,1] [0,2] [0,3] [0,4]|
	|16 17 18 19 6|				|[1,0] [1,1] [1,2] [1,3] [1,4]|
	|15 24 25 20 7|    ====>	|[2,0] [2,1] [2,2] [2,3] [2,4]|
	|14 23 22 21 8|				|[3,0] [3,1] [3,2] [3,3] [3,4]|
	|13 12 11 10 9|				|[4,0] [4,1] [4,2] [4,3] [4,4]|
	
	
	j increase 0-4;
	i increase 0-4;
	j decrease 4-0;
	i decrease 4-1;
	j increase 1-3;
	i increase 1-3;
	j decrease 3-1;
	i decrease 3-2;
	j increase 1-2;
	
*/
#include<stdio.h>

struct Matrix
{
	int val;
	int isvisited;
};

int main()
{
	int N=0;
	scanf("%d",&N);
	struct Matrix m[N][N];
	int ii[N*N/11+1],jj[N*N/11+1],pointcount=1;
	ii[0]=0;
	jj[0]=0;
	int i,j,num,count=1;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			m[i][j].val=0;
			m[i][j].isvisited=0;
		}
	}
	i=0,j=0,num=1;
	int flag=0;
	while(count<=N/2+1)
	{
		printf("RunID==%d\n",count);
		//j increase
		//printf("Traversing (%d,%d)\n",i,j);
		for(;j<N;j++)
		{
			if(m[i][j].isvisited==0)
			{
				printf("Traversing (%d,%d)\n",i,j);
				if(num%11==0)
				{
					ii[pointcount]=j;
					jj[pointcount]=i;
					pointcount++;
				}
				m[i][j].val=num++;
				m[i][j].isvisited=1;
			}
			else
				flag=1;
		}
		j-=1;
		if(flag)
		{
			flag=0;
			j-=1;
		}
		
		//i increase
		//printf("Traversing (%d,%d)\n",i,j);
		for(;i<N;i++)
		{
			if(m[i][j].isvisited==0)
			{
				printf("Traversing (%d,%d)\n",i,j);
				if(num%11==0)
				{
					ii[pointcount]=i;
					jj[pointcount]=j;
					pointcount++;
				}
				m[i][j].val=num++;
				m[i][j].isvisited=1;
			}
			else
				flag=1;
		}
		i-=1;
		if(flag)
		{
			flag=0;
			i-=count-1;
		}
		
		//j decrease
		//printf("Traversing (%d,%d)\n",i,j);
		for(;j>=0;j--)
		{
			if(m[i][j].isvisited==0)
			{
				printf("Traversing (%d,%d)\n",i,j);
				if(num%11==0)
				{
					ii[pointcount]=j;
					jj[pointcount]=i;
					pointcount++;
				}
				m[i][j].val=num++;
				m[i][j].isvisited=1;
			}
			else
				flag=1;
		}
		j+=1;
		if(flag)
		{
			flag=0;
			j+=count-1;
		}
		
		
		//i decrease
		//printf("Traversing (%d,%d)\n",i,j);
		for(;i>=0;i--)
		{
			if(m[i][j].isvisited==0)
			{
				printf("Traversing (%d,%d)\n",i,j);
				if(num%11==0)
				{
					ii[pointcount]=i;
					jj[pointcount]=j;
					pointcount++;
				}
				m[i][j].val=num++;
				m[i][j].isvisited=1;
			}
			else
				flag=1;
		}
		i+=1;
		if(flag)
		{
			flag=0;
			i+=count;
		}
		
		count++;
	}
	
	
	// OUTPUT
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d\t",m[i][j].val);
		}
		printf("\n");
	}
	int pp=(N*N)/11+1;
	/*printf("Total Power points : %d\n",pp);
	for(i=0;i<pp;i++)
		printf("(%d,%d)\n",jj[i],ii[i]);*/
	return 0;
}