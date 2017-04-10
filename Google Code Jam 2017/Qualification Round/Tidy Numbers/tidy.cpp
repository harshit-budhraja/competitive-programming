#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i = 0; i<t; i++)
	{
		long long n;
		cin>>n;
		int a[20], len = 0;
		while(n!=0)
		{
			a[len++] = n%10;
			n = n/10;
		}
		for(int z = 0; z<25; z++)	
		{
			int pos, flag = 1;
			for(int j = 0; j<(len - 1); j++)
				if(a[j]<a[j + 1])
				{
					flag = 0;
					pos = j;
				}
			if(flag == 0)
			{
				a[pos + 1]--;
				for(int c = 0; c<=pos; c++)
					a[c] = 9;
			}
		}
		for(int f = len - 1; f>=0; f--)
			n = n*10 + a[f];
		
		cout<<"Case #"<<i+1<<": "<<n<<endl;
	}
	return 0;
}
