#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		double s1,s2;
		cin>>s1>>s2;
		
		if(s1<s2)
		swap(s1,s2);
		
		double h1,h2;
		h1=(double)((double)sqrt(3)*(double)s1);
		h1=(double)(h1/2.0);
	
		h2=(double)((double)sqrt(3)*(double)s2);
		h2=(double)(h2/2.0);
		
		double area;
		double d1=s1/2;
		
		if(s2>d1)
		{
			area=(s1+(s2-d1))*h1;
		}
		else
		{
			area=s1*h1;
		}
		
		cout<<roundf(area*1000)/1000<<endl;
		
	}
	return 0;
}
