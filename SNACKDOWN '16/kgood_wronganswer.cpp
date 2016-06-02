// C++ 5.1
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t>0){
	    string s;
	    int k,index=0;
	    int count=0;
	    cin>>s>>k;
 
	    map<char,int> charmap;
	    int len=s.length();
	    for(int i=0;i<len;i++){
	        charmap[s[i]]++;
	    }
	    int siz=charmap.size();
	    int arr[siz];
	    for(int i=0;i<siz;i++){
	      arr[i]=0;  
	    }
	    map<char,int>::iterator it;
	    for(it=charmap.begin();it!=charmap.end();it++){
	        arr[index]=it->second;
	        index++;
 
	    }
	    sort(arr,arr+siz);
	    for(int i=0;i<siz;i++){
	        int temp=arr[i]-(arr[0]+k);
	        if(temp>0){
	           count+=temp;
	        } 
	    }
	    cout<<count<<endl;
	    t--;
	}
	return 0;
}
