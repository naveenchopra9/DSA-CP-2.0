#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mountain(vector <ll> v, ll n){
    ll largest=0;
    for(ll i=1;i<=n-2;){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            ll count=1;
            ll j=i;
            //Backwards
            while(j>=1 && v[j]>v[j-1]){
                j--;
                count++;
            }
            //Forward
            while(i<=n-2 && v[i]>v[i+1]){
                i++;
                count++;
            }
            largest=max(count,largest);
        }
        else{
            i++;
        }
    }
    return largest;
}
int main() {
    ll n;cin>>n;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    cout<<mountain(v,n);
	// your code goes here
	return 0;
}
