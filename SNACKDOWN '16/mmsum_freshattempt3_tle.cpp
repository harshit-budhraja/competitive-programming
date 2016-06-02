// C++14
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

vector<ll> m;

ll maxSubArraySum(vector<ll>& r)
{
   ll max_so_far = r[0];
   ll curr_max = r[0];
 
   for (int i = 1; i < r.size(); i++)
   {
        curr_max = max(r[i], curr_max+r[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
int main() 
{
	int t,n,number,del;
	ll max;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>number;
			m.push_back(number);
		}
		max = maxSubArraySum(m);
		for(int i=0;i<n;i++)
		{
			del = m[i];
			m.erase(m.begin()+i);
			if(maxSubArraySum(m)>max)
			{
				max=maxSubArraySum(m);
			}
			m.insert(m.begin()+i,del);
		}
		cout<<max<<endl;
		m.clear();
	}
	return 0;
}
