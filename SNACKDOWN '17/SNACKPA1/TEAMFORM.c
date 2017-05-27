#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		bool ans = !((n-2*m)%2);
		if(ans)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
		
		int u,v;
		while(m--){
			cin>>u>>v;
		}
	}
	return 0;
}