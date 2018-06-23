// C++14
#include <bits/stdc++.h>
#include <stack>
#define mp make_pair
#define pb push_back
using namespace std;
inline long long inp()
    {
        long long n = 0;
        char c = getchar_unlocked();
        while(c<'0'|| c>'9') c = getchar_unlocked();
        while(c>='0'&&c<='9')
        {
            n =(n<<3)+(n<<1)+c - '0';
            c = getchar_unlocked();
        }
        return n;
    }
 
int main()
{
    int t;
    t = inp();
    for (int i = 0 ; i < t ; i++)
    {
		int res[100005]={-1};
		int v[100005]={0};
        int flag = 0;
        long int n,a;
        n = inp();
        a = inp();
        long int max_index=0;
        vector<pair<long int , int> > arr[n + 1];
        for (int j = 0 ; j < a ; j++)
        {
            int k;
            long int l,r;
            l = inp();
            r = inp();
            k = inp();
            if (flag == 0 && l == r && k == 1)
            {
                flag = 1;
            }
            else if (l != r)
            {
                arr[l].pb(mp(r,k));
                arr[r].pb(mp(l,k));
            }
        	max_index = max(l,max(max_index,r));
        }
        for (int y = 1 ; y <= max_index ; y++)
        {
        	if (v[y] == 0)
        	{
        		stack<long int> s;
        		v[y] = 1;
        		res[y] = 0;
    			s.push(y);
    			while (!s.empty())
    			{
        			long int temp = s.top();
        			s.pop();
        			for (auto z = 0 ; z < arr[temp].size(); ++z)
    				{
    					if(v[arr[temp][z].first] == 0)
                		{
                    		if (arr[temp][z].second == 1)
                        		res[arr[temp][z].first] = ~res[temp];
                    		else
                    			res[arr[temp][z].first] = res[temp];
                        	s.push(arr[temp][z].first);
                        	v[arr[temp][z].first] = 1;
                		}
                		else
                		{
                			if (res[arr[temp][z].first] != ~res[temp] && arr[temp][z].second == 1)
                    		{
                        		flag = 1;
                        		break;
                    		}
                    		else if (res[arr[temp][z].first] == ~res[temp] && arr[temp][z].second == 0)
                    		{	
                    			flag = 1;
                    			break;
                    		}
                		}
    				}
    				if (flag == 1)
                		break;
    			}
    		}
    		if (flag == 1)
    			break;
        }
        if (flag == 1)
        	cout << "no" << endl;
        else
        	cout << "yes" << endl;
    }
    return 0;
}
