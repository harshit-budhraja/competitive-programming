//C++14
#include <iostream>
#define Mod 1000000007 
using namespace std;
#include <stdio.h>

int main()
{
	int testCases;
	cin >> testCases;
	while (testCases--)
	{
		int N, K;
		cin >> N >> K;
		long long int Result = 1;
		for (int i = 0; i<(N-K); i++)
		{
			Result = (Result*K) % Mod;
		}
		cout<<Result<<endl;
	}
	return 0;
}
