#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll MinDif(vector <ll> v1, vector <ll> v2, ll m, ll n){
    ll i=0;
    ll j=0;
    ll a=0,b=0;
    ll min=INT_MAX;
    while(i<m && j<n){
        if(abs(v1[i]-v2[j])<min){
            min=abs(v1[i]-v2[j]);
            a=v1[i];
            b=v2[j];
        }
        if(v1[i]<v2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<a<<"-"<<b<<"=";
    return min;
}
int main() {
    ll m,n;cin>>m>>n;
    vector <ll> v1,v2;
    for(ll i=0;i<m;i++){
        ll a;cin>>a;
        v1.push_back(a);
    }
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v2.push_back(a);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cout<<MinDif(v1,v2,m,n);
	// your code goes here
	return 0;
}
