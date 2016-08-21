/*	Final situation- Increasing order of heights. Also, the number of columns of each height remains the same. This means that the answer to the problem is the sorted sequence of the given column heights.
*/

#include<stdio.h>
int main( )
{
	int a[110];
	int i,j,temp,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
