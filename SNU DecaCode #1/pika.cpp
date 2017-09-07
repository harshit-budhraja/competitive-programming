#include <bits/stdc++.h>
#define mk make_pair
typedef long long int ll;
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    int n;
    cin>>n;
    ll a[n+5];
    
    for(int i=1;i<=n;i++)
    cin>>a[i];
    
    map<ll,int> ini,check;
    ll dp[n+1];
    
    dp[n]=0;
    ini.insert(mk(a[n],1));
    for(int i=n-1;i>0;i--)
    {
    	if(ini.find(a[i])==ini.end())
    	{
    		ini.insert(mk(a[i],1));
    		dp[i]=dp[i+1]+1;
    	}
    	else
    	dp[i]=dp[i+1];
    	//cout<<dp[i]<<" ";
    }
    
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
    	if(check.find(a[i])==check.end())
    	{
    		check.insert(mk(a[i],1));
    		ans+=dp[i];
    		//cout<<a[i]<<dp[i]<<"\n";
    	}
    	else
    	{
    	check[a[i]]++;
    	continue;
    	}
    }
    
    map<ll,int>::iterator it;
    for(it=check.begin();it!=check.end();it++)
    {
    	if(it->second>1)
    	ans++;
    }
    cout<<ans<<"\n";
    return 0;
}

