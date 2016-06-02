//C++ 14

#include<bits/stdc++.h>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int n;	string s;
void fun(void)
{
	int i,ar[30]={},x,p,q,m,temp,ans,y;
	map<char,int> ma;
	for(i=0;i<s.length();i++)
	{
		ma[s[i]]++;
	}
	map<char,int>::iterator it;
	for(i=0,it=ma.begin(); it!=ma.end(); ++it)
	{
		ar[i]=it->second;
		i++;
	}
	x=*max_element(ar,ar+i);
	y=*min_element(ar,ar+i);
	p=y;
	q=p+n;
	ans=100009;
	while(q<=x)
	{
		for(m=0,temp=0;m<i;m++)
		{
			if(ar[m]>=p && ar[m]<=q) 
				continue;
			if(ar[m]>q)	
				temp=temp+(ar[m]-q);
			if(ar[m]<p)	
				temp=temp+ar[m];
		}
		if(temp<ans)	
			ans=temp;
		if(ans==0)
		{
			cout<<0<<endl;
			return;
		}
		p++;
		q++;
	}
	cout<<ans<<endl;
}
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s>>n;
		fun();
	}
	return 0;
}
