#include<stdio.h>
#include<stdlib.h>

int verify_degrees(int x[][],int y[][])
{
	const int size=3;
	

}

int main()
{
	long int T=0;
	scanf("%ld",&T);
	int nov[3];	//nov is Number of vertices in the graph
	while(T--)
	{
		//Accepting the inputs from the judge
		long long int x[3][3],y[3][3];	
		//First Snake's endpoints are (x11,y11) and (x12,y12)	
		//Second Snake's endpoints are (x21,y21) and (x22,y22)
		scanf("%lld %lld %lld %lld",&x[1][1],&y[1][1],&x[1][2],&y[1][2]);
		scanf("%lld %lld %lld %lld",&x[2][1],&y[2][1],&x[2][2],&y[2][2]);

		// We need to form a graph from the input vertices
		// Number of vertices in the graph = x12-x11 or y12-y11 } Snake#1
		// Number of vertices in the graph = x22-x21 or y22-y21 } Snake#2
		if(x[1][2]-x[1][1]==0)
		{	
			nov[1]=y[1][2]-y[1][1];
		}
		else if(y[1][2]-y[1][1]==0)
		{
			nov[1]=x[1][2]-x[1][1];
		}

		if(x[2][2]-x[2][1]==0)
		{	
			nov[2]=y[2][2]-y[2][1];
		}
		else if(y[2][2]-y[2][1]==0)
		{
			nov[2]=x[2][2]-x[2][1];
		}

	}
	return 0;
}