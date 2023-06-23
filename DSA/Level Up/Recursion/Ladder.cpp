 #include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll CountWays(ll n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
     
    return CountWays(n-1)+CountWays(n-2)+CountWays(n-3);
}
int main() {
    ll n;cin>>n;
    cout<<CountWays(n);
	// your code goes here
	return 0;
}
