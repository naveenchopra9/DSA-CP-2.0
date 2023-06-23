#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void HousingPlot(vector <ll> v, ll n, ll k){
    ll i=0,j=0,cs=0;
    while(j<n){
        cs+=v[j];
        j++;
        
        while(cs>k && i<j){
            cs=cs-v[i];
            i++;
        }
        
        if(cs==k){
            cout<<i<<" "<<j-1<<endl;
        }
    }
    return 
}
int main() {
    ll n,k;cin>>n>>k;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    HousingPlot(v,n,k);
	// your code goes here
	return 0;
}
