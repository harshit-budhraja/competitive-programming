//C++14
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	sort(a,a+n);
    	for(i=0;i<n;i++)
    	{
    		printf("%d ",a[i]);
    	}
    	printf("\n");
    }
    return 0;
}

