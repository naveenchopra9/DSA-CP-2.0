#include<bits/stdc++.h>

using namespace std;

int minJumps(vector<int> &A){
	const int n = A.size();
	vector<int> jumps(n);

	if(n == 0 || A[0] == 0) return INT_MAX;

	jumps[0] = 0;

	for(int i=1;i<n;i++){
		jumps[i] = INT_MAX;
		for(int j=0;j<i;j++){
			if(i <= j+arr[j] && jumps[j] != INT_MAX){
				jumps[i] = min(jumps[i],jumps[j] + 1);
				break;
			}
		}
	}

	return jumps[n-1];
}

void solve(){
	int n;
	cin>>n;

	vector<int> arr(n);
	for(auto &x : arr) cin>>x;

	cout<<minJumps(arr);
}

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}