#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll LargestBand(vector <ll> v, ll n){
    unordered_set <ll> s;
    for(ll x: v){
        s.insert(x);
    }
    ll largest=1;
    for(auto element: s){
        ll parent=element-1;
        if(s.find(parent)==s.end()){
            ll next_no=element+1;
            ll count=1;
            while(s.find(next_no)!=s.end()){
                next_no++;
                count++;
            }
            if(count>largest){
                largest=count;
            }
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
    cout<<LargestBand(v,n);
	// your code goes here
	return 0;
}
