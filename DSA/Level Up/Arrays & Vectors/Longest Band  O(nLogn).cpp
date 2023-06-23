#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    //0 1 2 3 4 5 6 7 9 10 12 
    ll result=0,c=0;
    for(ll i=0;i<n-1;i++){
        if(abs(v[i]-v[i+1])==1){
            c++;
            if(c>result){
                result=c;
            }
        }
    }
    cout<<result;
	// your code goes here
	return 0;
}
