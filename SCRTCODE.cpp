// Author:- Harshit Budhraja
// C++14
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

long b2d(string s)
{
	long decimal=0, length=s.size(), temp=0;
	for (int i=0;i<length;i++)
	{
		temp=(s[i] - '0');
		if (temp)
			decimal += temp*pow(2, length-i-1);
	}
	return decimal;
}

long HCF(long a, long b)
{
	if (b == 0) 
		return a;
	return HCF(b, a%b);
}

int main()
{
	int T=0;
	cin >> T;
	getchar();
	for(int i=0;i<T;i++)
	{
		string S1, S2;
		long s1,s2;
		getline(cin, S1);
		getline(cin, S2);
		s1 = b2d(S1);
		s2 = b2d(S2);
		cout << "Pair #" << i+1 << ": ";
		int ans=HCF(s1,s2);
		if(ans>1)
			cout<<"Secret_binary_code are same!!"<<endl;
		else 
			cout<<"Secret_binary_code are different!!"<<endl;
	}
}

/*
50
11011
11
11000
1101
110101
100
101010   
100
101011
1010
11011
11001
111111
100
1000000000
110
1010
100
11011
11000
10101011
1101
1011
1110
1010101010111
101010
1111111111100000000011         
1110
111000111
11100
1101011 
1101
10101001
10010010
1011001
11001
1110011
1100
1100111
1100
11100011
101011
11011
11
11000
110
11000
11
10101
1111
111010
11111
110101110
1101000
110100000001
1001
100101010111111
101010
1010111011
1111101
1001
1100
110
11011
11
10101
11011101
1010
111
11
1001
10111
1110001
110001
1110
110
1101
101
1110110001
10101101
11000    
1010
110   
100
11101
101
1101101
110011111111
11111111111
1000000000
101011
101
1111
11000
10101
11011
1001
110
11
1010
*/