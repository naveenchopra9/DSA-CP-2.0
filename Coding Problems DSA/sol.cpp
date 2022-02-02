#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int ans = 0;
	int XOR = 0;
	int indexBeg = 0,indexEnd=n-k+1;

	for(int i=0;i<=n-k;i++) 
		XOR ^= (s[i] - '0');
	if(XOR == 1) ans++;
	while(indexEnd < n){
		XOR ^= (s[indexBeg++] - '0');
		XOR ^= (s[indexEnd++] - '0');
		if(XOR == 1) ans++;
	}
	cout<<ans<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif
	int tc;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}