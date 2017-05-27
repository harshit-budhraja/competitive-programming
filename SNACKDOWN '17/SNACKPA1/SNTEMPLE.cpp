#include <iostream>
#include <cmath>
#include <string>

using namespace std;

long long int validate(long long int arr[], long long int size)
{
	long long int count=0;
	for(long long int i=1;i<size;i++)
	{
		if(abs(arr[i]-arr[i-1]) > 1)
		{
			count += abs(arr[i]-arr[i-1])-1;
			arr[i] -= abs(arr[i]-arr[i-1])-1;
		}
	}
	return count;
}

long long int cramble(long long int arr[], long long int size) {
    long long int count = 0;
    for(long long int i = 0, j = size-1; i < j; ++i, --j) 
	{
		if(arr[i]==0)
			i++;
		if(arr[j]==0)
			j--;
        if(arr[i] != arr[j]) 
		{
            count += abs(arr[i] - arr[j]);
        }
    }
	long long int tmp=validate(arr,size);
	if(tmp!=0) 
	{
		count += tmp;
	}
	return count;
}

int main()
{
    int T=0;
    cin>>T;
    while(T--)
	{
		long long int s=0;
		cin>>s;
		long long int arr[s];
		for(long long int i=0;i<s;i++)
			cin>>arr[i];
		cout<<cramble(arr,s)<<endl;
	}
    return 0;
}