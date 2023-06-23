#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    vector <vector<ll>> v;
    for(ll i=0;i<3;i++){
        vector <ll> v1;
        for(ll j=0;j<3;j++){
            ll a;cin>>a;
            v1.push_back(a);
        }
        v.push_back(v1);
    }
    
    for(ll i=0;i<3;i++){
        for(ll x:v[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
