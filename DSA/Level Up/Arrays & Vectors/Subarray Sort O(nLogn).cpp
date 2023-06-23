#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 void CSort(vector <ll> v, ll n){
    vector <ll> v1(v);
    sort(v1.begin(),v1.end());
    ll l=0,r=n-1;
    while(l<n && v[l]==v1[l]){
        l++;
    }
    
    while(r>=0 && v[r]==v1[r]){
        r--;
    }
    
    if(l==n){
        cout<<"-1"<<" "<<"-1";
    }
    else{
        cout<<l<<" "<<r;
    }
}
int main() {
    ll n;cin>>n;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    CSort(v,n);
	// your code goes here
	return 0;
}
