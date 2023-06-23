#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,s;cin>>n>>s;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll l=0,r=n-1;
    while(l<r){
        if(arr[l]+arr[r]==s){
            cout<<arr[l]<<" "<<arr[r]<<endl;
            l++;
            r--;
        }
        else if(arr[l]+arr[r]<s){
            l++;
        }
        else{
            r--;
        }
    }
	// your code goes here
	return 0;
}
