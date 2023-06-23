#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll CountSubset(vector <ll> v, ll n, ll i, ll x){
    if(i==n){
        if(x==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    ll inc=CountSubset(v,n,i+1,x-v[i]);
    ll exc=CountSubset(v,n,i+1,x);
    return inc+exc;
}
int main() {
    ll n,x;cin>>n>>x;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    cout<<CountSubset(v,n,0,x);
	// your code goes here
	return 0;
}
