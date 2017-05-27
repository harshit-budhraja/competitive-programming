/*
* Author:- Harshit Budhraja
*/

#include <bits/stdc++.h>

#define f0(i,a,b) for(int i= a; i<= b; ++i)
#define f1(i,a,b) for(int i= a; i>= b; --i)
#define DEBUG(x)    cerr << #x << " = " << x << endl
#define INPUT       freopen("XAUCON.INP", "r", stdin)
#define OUTPUT      freopen("XAUCON.OUT", "w", stdout)
using namespace std;
const int base=1e9+7;
typedef pair<int, int> ii;
typedef long long ll;

/*

 End of Template

*/

/* Action  */

void Solves(){
	ll test;
	cin>>test;
	while(test--){
	
	ll n;
	cin>>n;
	vector<ll>qw[3*501];
	vector<ll>dd(3*(n+1),0);
	vector<ll>dda(3*(n+1),0);
	string a[2];
	for(int i=0;i<2;i++){
		cin>>a[i];
	}
	ll dem=0,min=1e9,id = -1;
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			int kx = (i)*n + (j+1);
			if(a[i][j] == '#'){
				dem++;
			if(i+1<2)
				if(a[i+1][j] == '#') {
						int ky = (i+1)*n + (j+1);
						qw[ky].push_back(kx);
						qw[kx].push_back(ky);
						dd[kx]++;
						dd[ky]++;				
				}
			if(j+1<n)
				if(a[i][j+1] == '#'){
					int ky = (i)*n + (j+2);
					qw[ky].push_back(kx);
					qw[kx].push_back(ky);
					dd[ky]++;
					dd[kx]++;
				}
			if(dd[kx] <min) {
				min = dd[kx];
				id = kx;
			}
			}
		}
	}
	// BFS
	if(id == -1) {
		cout<<"yes"<<endl;
		continue;
	}
	queue<ll> st;
	st.push(id);
	dda[id]++;
	ll ans = 0;
//	DEBUG(dem);
//	DEBUG(id);
	while(!st.empty()){
		ll front = st.front();
		st.pop();
		dda[front]++;
		ans ++;
		ll nho = 1e9,idnho=-1;
		for(int i=0;i<qw[front].size();i++){
			if(dda[qw[front][i]]==0){
				dd[qw[front][i]]--;
				if(nho > dd[qw[front][i]]) {
					nho = dd[qw[front][i]];
					idnho = qw[front][i];
				}
			}
		}
		if(idnho!=-1) st.push(idnho);
		else break;
	}
//	DEBUG(dem);
//	DEBUG(id);
//	DEBUG(ans);
	if(ans == dem) cout<<"yes";
	else cout<<"no";
	cout<<endl;
}
}
int main(){
	#ifdef LOCAL
    	INPUT;
        OUTPUT;
    #endif
	Solves();    
}