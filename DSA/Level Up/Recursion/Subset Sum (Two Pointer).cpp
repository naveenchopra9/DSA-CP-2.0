#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll Find(vector <ll> v, ll n, ll k){
    ll i=0;
    ll j=n-1;
    ll count=-1;
    while(i<j){
        if(v[i]+v[j]==k){
            count=1;
            break;
        }
        if(v[i]+v[j]<k){
            i++;
        }
        else{
            j--;
        }
    }
    return count;
}
int main() {
    ll n,k;cin>>n>>k;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<Find(v,n,k);
	// your code goes here
	return 0;
}
