#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll MaxWater(vector <ll> v, ll n){
    
    if(n<=2){
        return 0;
    }
    vector <ll> left(n,0), right(n,0);
    left[0]=v[0];
    right[n-1]=v[n-1];
    
    for(ll i=1;i<n;i++){
        left[i]= max(left[i-1],v[i]);
        right[n-i-1]=max(right[n-i],v[n-i-1]);
    }
    ll water=0;
    for(ll i=0;i<n;i++){
        water+=min(left[i],right[i]) - v[i];
    }
    return water;
}
int main() {
    ll n;cin>>n;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    cout<<MaxWater(v,n);
	// your code goes here
	return 0;
}
