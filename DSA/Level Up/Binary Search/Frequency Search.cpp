#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll lower_bound(vector <ll> v, ll key){
    ll s=0;
    ll e=v.size()-1;
    ll ans=-1;
    while(s<=e){
        ll mid=(s+e)/2;
        if(v[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(v[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
ll upper_bound(vector <ll> v, ll key){
    ll s=0;
    ll e=v.size()-1;
    ll ans=-1;
    while(s<=e){
        ll mid=(s+e)/2;
        if(v[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(v[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main() {
    ll n;cin>>n;
    ll key;cin>>key;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    //Our Custom Made Function
    cout<<upper_bound(v,key)-lower_bound(v,key)+1;
    //USING STL ->Only One Line Code
	cout<<upper_bound(v.begin(),v.end(),key)-lower_bound(v.begin(),v.end(),key);
	// your code goes here
	return 0;
}
