#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll maxSubarraySum(vector<ll> arr){
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();
    ll cursum=0,maxsum=0;
    for(ll i=0;i<n;i++){
        cursum=arr[i]+cursum;
        if(cursum>maxsum){
            maxsum=cursum;
        }
        
        if(cursum<0){
            cursum=0;
        }
    }
    
    return maxsum;
    
}
int main() {
    ll n;cin>>n;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    cout<< maxSubarraySum(v);
	// your code goes here
	return 0;
}
